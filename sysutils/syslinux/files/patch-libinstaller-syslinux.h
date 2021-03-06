--- libinstaller/syslinux.h.orig	2013-10-13 19:59:03.000000000 +0200
+++ libinstaller/syslinux.h	2014-09-29 05:30:55.000000000 +0200
@@ -13,20 +13,21 @@
 #ifndef SYSLINUX_H
 #define SYSLINUX_H
 
+#include <sys/types.h>
 #include <inttypes.h>
 #include "advconst.h"
 #include "setadv.h"
 
 /* The standard boot sector and ldlinux image */
-extern unsigned char syslinux_bootsect[];
+extern unsigned char *syslinux_bootsect;
 extern const unsigned int syslinux_bootsect_len;
 extern const int syslinux_bootsect_mtime;
 
-extern unsigned char syslinux_ldlinux[];
-extern const unsigned int syslinux_ldlinux_len;
+extern unsigned char *syslinux_ldlinux;
+extern unsigned int syslinux_ldlinux_len;
 extern const int syslinux_ldlinux_mtime;
 
-extern unsigned char syslinux_ldlinuxc32[];
+extern unsigned char *syslinux_ldlinuxc32;
 extern const unsigned int syslinux_ldlinuxc32_len;

 #define boot_sector	syslinux_bootsect
@@ -34,7 +35,7 @@
 #define boot_image	syslinux_ldlinux
 #define boot_image_len	syslinux_ldlinux_len
 
-extern unsigned char syslinux_mbr[];
+extern unsigned char *syslinux_mbr;
 extern const unsigned int syslinux_mbr_len;
 extern const int syslinux_mbr_mtime;
 
