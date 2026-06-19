<div align=center>

<img src="extras/banner.png" alt="Banner" width="30%">

</div>
<h1 align=center>Final Fantasy IV 3D — Nintendo Switch port</h1>

This is a wrapper/port of the Android version of *Final Fantasy IV 3D*
(`com.square_enix.android_googleplay.FFIV_GP`, v2.0.5). It loads the original game
binary, patches it and runs it: we natively run the original Android `.so` inside a
minimal emulated Android environment.


### How to install

You're going to need:
* The **`.apk`** for version 2.0.5. The game data lives in `assets/main.obb`, the
  engine code is `lib/arm64-v8a/libff4.so`, and the intro movie is
  `res/raw/opening.mp4`.

To install:
1. Create a folder called `ff4_3d` in the `switch` folder on your SD card.
2. From your `.apk`, extract **`lib/arm64-v8a/libff4.so`** to `/switch/ff4_3d/`.
3. From your `.apk`, extract **`assets/main.obb`** to `/switch/ff4_3d/`.
4. From your `.apk`, extract **`res/raw/opening.mp4`** to `/switch/ff4_3d/res/raw/`.
5. Copy **`ff4_3d_nx.nro`** into `/switch/ff4_3d/`.

So `/switch/ff4_3d/` should contain: `libff4.so`, `main.obb`, `res/raw/opening.mp4`,
`ff4_3d_nx.nro`.

`libff4proxy.so` and `libRMS.so` are not needed. The wrapper calls the real engine in
`libff4.so` directly.

### Notes

This will not work in applet/album mode. Use a game override (hold R on a title) or a
forwarder, so the homebrew gets the full memory and required syscalls.

Save games, achievement data, the port's `ff4_3d_config.txt` and `ff4_3d_debug.log` are
stored in `/switch/ff4_3d/`.

### Configuration

`ff4_3d_config.txt` is created on first run:
* `screen_width` / `screen_height` — render resolution; `-1` picks 1280x720 handheld and
  1920x1080 docked.
* `widescreen` — set to `1` for a 16:9 viewport, or `0` for the legacy aspect.
* `language` — selects the localized text and assets:
  `0` ru, `1` th, `2` ja, `3` en, `4` fr, `5` de, `6` it, `7` es, `8` zh_CN, `9` zh_TW,
  `10` ko, `11` pt. Defaults to English.

### How to build

You're going to need devkitA64 and the following devkitPro packages:
* `switch-mesa`
* `switch-libdrm_nouveau`
* `switch-sdl2`
* `switch-freetype`
* `switch-libpng`
* `switch-harfbuzz`
* `switch-ffmpeg`
* `switch-dav1d`


### Credits

* fgsfds for [max_nx](https://github.com/fgsfdsfgs/max_nx), which this loader is based on
* TheOfficialFloW for the original Vita ports that pioneered this technique

### Support

If you enjoy my work and want to support me :

[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/D1D1P2MOG)

### Legal

This project has no direct affiliation with Square Enix. "Final Fantasy" and "Final
Fantasy IV" are trademarks of their respective owners. All Rights Reserved.

No assets or program code from the original game or its Android port are included in this
project. We do not condone piracy in any way, shape or form and encourage users to
legally own the original game.

Unless specified otherwise, the source code provided in this repository is licensed under
the MIT License. Please see the accompanying LICENSE file.