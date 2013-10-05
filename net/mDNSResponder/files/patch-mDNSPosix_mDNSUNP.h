--- ./mDNSPosix/mDNSUNP.h.orig	2011-12-01 16:39:45.000000000 -0800
+++ ./mDNSPosix/mDNSUNP.h	2013-10-05 13:18:15.000000000 -0700
@@ -31,10 +31,15 @@
 // The following are the supported non-linux posix OSes -
 // netbsd, freebsd and openbsd.
 #if HAVE_IPV6
+#if defined(__FreeBSD__)
+#define IPV6_2292_PKTINFO  IPV6_PKTINFO
+#define IPV6_2292_HOPLIMIT IPV6_HOPLIMIT
+#else
 #define IPV6_2292_PKTINFO  19
 #define IPV6_2292_HOPLIMIT 20
 #endif
 #endif
+#endif
 
 #ifdef  __cplusplus
 extern "C" {
