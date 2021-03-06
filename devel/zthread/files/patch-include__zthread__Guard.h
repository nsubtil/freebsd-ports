--- ./include/zthread/Guard.h.orig	2005-03-12 21:10:09.000000000 -0500
+++ ./include/zthread/Guard.h	2013-01-17 13:50:40.000000000 -0500
@@ -108,7 +108,7 @@
   }
 
   template <class LockType>
-  static void createScope(LockHolder<LockType>& l, unsigned long ms) {
+  static bool createScope(LockHolder<LockType>& l, unsigned long ms) {
 
     if(Scope1::createScope(l, ms))
       if(!Scope2::createScope(l, ms)) {
@@ -428,7 +428,7 @@
   template <class U, class V>
   Guard(Guard<U, V>& g) : LockHolder<LockType>(g) {
 
-    LockingPolicy::shareScope(*this, extract(g));
+    LockingPolicy::shareScope(*this, this->extract(g));
     
   }
 
@@ -458,7 +458,7 @@
   template <class U, class V>
   Guard(Guard<U, V>& g, LockType& lock) : LockHolder<LockType>(lock) {
 
-    LockingPolicy::transferScope(*this, extract(g));
+    LockingPolicy::transferScope(*this, this->extract(g));
 
   }
 
@@ -491,7 +491,7 @@
     
   try {
     
-    if(!isDisabled())
+    if(!this->isDisabled())
       LockingPolicy::destroyScope(*this);
     
   } catch (...) { /* ignore */ }  
