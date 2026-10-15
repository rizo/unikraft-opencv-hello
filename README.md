# unikraft-opencv-hello

A minimal Unikraft unikernel using [lib-opencv](https://github.com/rizo/lib-opencv).


## Build

```shell
kraft build --plat=qemu --arch=x86_64 --no-prompt | cat
```

## Run

```shell
kraft run --plat=qemu --arch=x86_64
```

