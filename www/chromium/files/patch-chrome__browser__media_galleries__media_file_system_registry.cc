--- chrome/browser/media_galleries/media_file_system_registry.cc.orig	2014-10-02 17:39:46 UTC
+++ chrome/browser/media_galleries/media_file_system_registry.cc
@@ -734,7 +734,10 @@
 // Constructor in 'private' section because depends on private class definition.
 MediaFileSystemRegistry::MediaFileSystemRegistry()
     : file_system_context_(new MediaFileSystemContextImpl) {
-  StorageMonitor::GetInstance()->AddObserver(this);
+  // This conditional is needed for shutdown.  Destructors
+  // try to get the media file system registry.
+  if (StorageMonitor::GetInstance())
+    StorageMonitor::GetInstance()->AddObserver(this);
 }
 
 MediaFileSystemRegistry::~MediaFileSystemRegistry() {
