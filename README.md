# unikraft-opencv-hello

A minimal Unikraft unikernel using
[unikraft-lib-opencv](https://github.com/rizo/unikraft-lib-opencv).


## Build

```shell
kraft build --plat=qemu --arch=x86_64 --no-prompt | cat
```

## Run

```shell
kraft run --plat=qemu --arch=x86_64
```

