# python3 for Unikraft
This is the port of python3 for Unikraft as external library.

## Build
Python 3 interpreter depends on the following libraries, that need to
be added to `Makefile` in this order:

* `pthreads`, e.g. `pthread-embedded`
* `libc`, e.g. `newlib`
* network stack, e.g. `lwip`
* (optional) a SIMD library, e.g. `intel-intrinsics`, for optimized
  BLAKE hashing 
* optional extensions: `openssl`, `zlib`, `libuuid`, Expat XML parser,
  `_ctypes` and decimal operations with `libmpdec`.

## Root filesystem
### Creating the filesystem
Python 3 interpreter needs a filesystem which should contain its
standard library. Therefore, the filesystem needs to be created before
running the VM.  You can do this by running the following command:

```bash
make python-rootfs path=<some directory>
```

It will create the filesystem in the directory you choose, by first
creating a virtual Python environment. After that it will install the
Python standard library into it. For this second step, the original
code needs to be configured and build with paths relative to the
provided root directory. These two steps are executed transparently,
all you have to do is just running the above `make` command.

### Using the filesystem
Mounting the filesystem is a transparent operation. All you have to do
is to provide the right Qemu parameters in order for Unikraft to mount
the filesystem.  We will use the 9pfs support for filesystems and for
this you will need to use the following parameters:

```bash
-fsdev local,id=myid,path=<some directory>,security_model=none \
-device virtio-9p-pci,fsdev=myid,mount_tag=test,disable-modern=on,disable-legacy=off
```

You should also use `vfs.rootdev=test` to specify the 9pfs mounting
tag to Unikraft. To enable 9pfs, you'll need to select the following
menu options, all under "Library Configuration"

* uk9p: 9p client

* vfscore: VFS Core Interface ---> vfscore: Configuration
                              ---> Automatically mount a root filesysytem 
	  						  ---> Default root filesystem 
	 						  ---> 9PFS

* devfs: devfs file system  ---> Mount /dev during boot

* uk library parameter

## Running modes
The Next step is to pick a running mode. We currently support 3 running
modes:

1. **Python shell**. No extra parameters are needed.
     * You can use the `main()` function provided by the library via
     `menuconfig`:
	 
	 Library Configuration  ---> Python 3  ---> Provide main function
	 
	 Otherwise you will have to provide your own `main()` function
     which should call `_Py_UnixMain()`.
	 
2. **Python script**. You can use any file available in the root
   filesystem.  You should use Qemu's `-append` option to pass
   parameter to Python interpreter, e.g. `-append "vfs.rootdev=test --
   <some file in rootfs>"`.  Please notice that we are using `test`
   for the 9pfs mounting tag. For brevity we will skip setting the
   mounting tag in the next examples.
   
3. **Python unit testing (developers only)**. With this mode you can
   check what functionality is completely supported by the Python 3
   port. Please be aware that this mode is unstable and some of the
   tests may block. You can work around that by using the options
   provided by the unit testing framework. The unit testing mode
   itself supports several submodes:
   
     * **Running all the tests**. You have to use the following Qemu
       parameters: `-append "-- -B -c 'from test import autotest'"`
	 
     * Check the supported options of the unit testing framework,
       e.g. `-append "-- -B -c 'from test import autotest' -h"`.
	 
       * For example, you can run a single unit test with verbosity
         using `-append "-- -B -c 'from test import autotest' -v
         test_dict"`.
	   
       * Or you can run a set of tests listed in a file using `-append
         "-- -B -c 'from test import autotest' -f <file in rootfs>"`.
	   

### Memory usage
Some of the unit tests may require a lot of memory to run; for this
reason please allow for at least 1G of memory for unit testing (e.g.,
`-m 1G` in Qemu).

## Adding modules
For installing Python modules which have only Python code, you can use
the `pip` utility installed in the Python virtual environment you
created using the steps above.

```bash
<my-python-rootfs> $ . bin/activate
<my-python-rootfs> $ pip install mymodule
```

However, some of the Python modules need some native support,
e.g. some C code which should be compiled and registered at run
time. You need to add the source files of the native library to
`Makefile.uk.` for compiling them. For runtime registration, you need
to add a new entry in the `modules_config.c` file.

Note that this port already supports a few such modules: `openssl`,
`zlib` and `libuuid` as of this writing. To enable them select them in
the menu under:

Library Configuration ---> Python 3 ---> Extensions

## Further information
Please refer to the `README.md` as well as the documentation in the
`doc/` subdirectory of the main unikraft repository.
