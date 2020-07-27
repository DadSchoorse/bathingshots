# bathingshots
A Vulkan Screenshot Layer

Why? I don't know, it's not usefull, maybe on nvidia + flipping + no compositor because other screenshot tools sometimes have issues with that.

![](https://git.froggi.es/Riesi/frog_emojis/-/raw/master/png/fixed_width/256/bathingfrog.png)

# Installing

```
git clone https://github.com/DadSchoorse/bathingshots.git
cd bathingshots
meson --buildtype=release -Dappend_libdir_bathingshots=true builddir
ninja -C builddir install
```

# How to use

Set`BATH=1` in the environment. For example, use this as launch option for a steam game:
```
BATH=1 %command%
```
Pressing `End` will save a screenshot to `/tmp/screenshot.png`, both arePressing `End` will save a screenshot to `/tmp/screenshot.png`, but is currently not  currently not configurable.
