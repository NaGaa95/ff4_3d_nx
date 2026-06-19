/* config.h -- FF4 3D Switch wrapper configuration
 *
 * This software may be modified and distributed under the terms
 * of the MIT license. See the LICENSE file for details.
 */

#ifndef __CONFIG_H__
#define __CONFIG_H__

#define MEMORY_MB 512

// Final Fantasy IV 3D (Android) ships the real engine as libff4.so. The
// Android libff4proxy.so only loads this library and forwards JNI entry points,
// so the Switch wrapper talks to libff4.so directly.
#define SO_NAME "libff4.so"
#define OBB_NAME "main.obb"
#define CONFIG_NAME "ff4_3d_config.txt"
#define LOG_NAME "ff4_3d_debug.log"

#define DEBUG_LOG 0

extern int screen_width;
extern int screen_height;

// MainActivity's language order:
//   0 ru  1 th  2 ja  3 en  4 fr  5 de  6 it  7 es  8 zh_CN  9 zh_TW  10 ko  11 pt
#define LANG_EN 3

typedef struct {
  int screen_width;
  int screen_height;
  int widescreen;
  int language;
} Config;

extern Config config;

int read_config(const char *file);
int write_config(const char *file);

#endif
