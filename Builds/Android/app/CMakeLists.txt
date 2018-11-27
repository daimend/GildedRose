# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

SET(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=10" "-DJUCE_ANDROID_ACTIVITY_CLASSNAME=com_yourcompany_gildedrose_GildedRose" "-DJUCE_ANDROID_ACTIVITY_CLASSPATH=\"com/yourcompany/gildedrose/GildedRose\"" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSNAME=com_yourcompany_gildedrose_SharingContentProvider" "-DJUCE_ANDROID_SHARING_CONTENT_PROVIDER_CLASSPATH=\"com/yourcompany/gildedrose/SharingContentProvider\"" "-DJUCE_PUSH_NOTIFICATIONS=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "D:/Code/JUCE/modules"
    "D:/Code/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

IF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DDEBUG=1" "-D_DEBUG=1")
ELSEIF(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DNDEBUG=1")
ELSE(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    MESSAGE( FATAL_ERROR "No matching build-configuration found." )
ENDIF(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Client.h"
    "../../../Source/index.html"
    "../../../Source/Models.h"
    "../../../Source/Server.cpp"
    "../../../Source/Server.h"
    "../../../Source/Services/Booking.h"
    "../../../Source/Services/Schedule.h"
    "../../../Source/Services/Service.cpp"
    "../../../Source/Services/Service.h"
    "../../../Source/Services/Services.h"
    "../../../Source/Main.cpp"
    "../../../Readme.md"
    "D:/Code/JUCE/modules/juce_analytics/analytics/juce_Analytics.cpp"
    "D:/Code/JUCE/modules/juce_analytics/analytics/juce_Analytics.h"
    "D:/Code/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.cpp"
    "D:/Code/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.h"
    "D:/Code/JUCE/modules/juce_analytics/destinations/juce_AnalyticsDestination.h"
    "D:/Code/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.cpp"
    "D:/Code/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.h"
    "D:/Code/JUCE/modules/juce_analytics/juce_analytics.cpp"
    "D:/Code/JUCE/modules/juce_analytics/juce_analytics.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_Array.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "D:/Code/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "D:/Code/JUCE/modules/juce_core/containers/juce_Variant.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_File.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_File.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "D:/Code/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "D:/Code/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "D:/Code/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "D:/Code/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "D:/Code/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "D:/Code/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "D:/Code/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "D:/Code/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "D:/Code/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "D:/Code/JUCE/modules/juce_core/logging/juce_Logger.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "D:/Code/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "D:/Code/JUCE/modules/juce_core/maths/juce_Expression.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "D:/Code/JUCE/modules/juce_core/maths/juce_Random.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_Range.h"
    "D:/Code/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_Memory.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "D:/Code/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "D:/Code/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "D:/Code/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "D:/Code/JUCE/modules/juce_core/misc/juce_Result.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "D:/Code/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp"
    "D:/Code/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "D:/Code/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "D:/Code/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "D:/Code/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "D:/Code/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "D:/Code/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "D:/Code/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "D:/Code/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "D:/Code/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_Socket.h"
    "D:/Code/JUCE/modules/juce_core/network/juce_URL.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_URL.h"
    "D:/Code/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "D:/Code/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "D:/Code/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "D:/Code/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "D:/Code/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "D:/Code/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "D:/Code/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "D:/Code/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "D:/Code/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_Base64.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_Identifier.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_NewLine.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_String.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_String.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringArray.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringPool.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_StringRef.h"
    "D:/Code/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "D:/Code/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_Process.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_Thread.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "D:/Code/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "D:/Code/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "D:/Code/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "D:/Code/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "D:/Code/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "D:/Code/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "D:/Code/JUCE/modules/juce_core/time/juce_Time.cpp"
    "D:/Code/JUCE/modules/juce_core/time/juce_Time.h"
    "D:/Code/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "D:/Code/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "D:/Code/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "D:/Code/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "D:/Code/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "D:/Code/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/compress.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/infback.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/trees.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/trees.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "D:/Code/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "D:/Code/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "D:/Code/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "D:/Code/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "D:/Code/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "D:/Code/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "D:/Code/JUCE/modules/juce_core/juce_core.cpp"
    "D:/Code/JUCE/modules/juce_core/juce_core.mm"
    "D:/Code/JUCE/modules/juce_core/juce_core.h"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_Primes.h"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_MD5.h"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h"
    "D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.cpp"
    "D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.mm"
    "D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.h"
    "D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "D:/Code/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "D:/Code/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "D:/Code/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_Message.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "D:/Code/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "D:/Code/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "D:/Code/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "D:/Code/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "D:/Code/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "D:/Code/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "D:/Code/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "D:/Code/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "D:/Code/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "D:/Code/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "D:/Code/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "D:/Code/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "D:/Code/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "D:/Code/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "D:/Code/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "D:/Code/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "D:/Code/JUCE/modules/juce_events/timers/juce_Timer.h"
    "D:/Code/JUCE/modules/juce_events/juce_events.cpp"
    "D:/Code/JUCE/modules/juce_events/juce_events.mm"
    "D:/Code/JUCE/modules/juce_events/juce_events.h"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "D:/Code/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "D:/Code/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "D:/Code/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "D:/Code/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "D:/Code/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "D:/Code/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "D:/Code/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "D:/Code/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "D:/Code/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_Image.h"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "D:/Code/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "D:/Code/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "D:/Code/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "D:/Code/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "D:/Code/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "D:/Code/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "D:/Code/JUCE/modules/juce_graphics/juce_graphics.mm"
    "D:/Code/JUCE/modules/juce_graphics/juce_graphics.h"
    "D:/Code/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h"
    "D:/Code/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp"
    "D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.mm"
    "D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.h"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/AppConfig.h"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_core.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_core.mm"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_data_structures.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_data_structures.mm"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_events.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_events.mm"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_graphics.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_graphics.mm"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_gui_basics.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_gui_basics.mm"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_mongoose.cpp"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/JuceHeader.h"
    "D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/ReadMe.txt"
    "D:/Code/modules/juce_mongoose/demo/Source/Main.cpp"
    "D:/Code/modules/juce_mongoose/demo/Source/MainComponent.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Controller.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Controller.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonController.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonController.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonResponse.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonResponse.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Mutex.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Mutex.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Request.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Request.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_RequestHandler.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Response.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Response.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Server.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Server.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Session.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Session.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Sessions.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Sessions.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_StreamResponse.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_StreamResponse.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_UploadFile.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_UploadFile.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Utils.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Utils.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebController.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebController.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSocket.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSocket.h"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSockets.cpp"
    "D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSockets.h"
    "D:/Code/modules/juce_mongoose/mongoose/mongoose_api.c"
    "D:/Code/modules/juce_mongoose/mongoose/mongoose_api.h"
    "D:/Code/modules/juce_mongoose/juce_mongoose.cpp"
    "D:/Code/modules/juce_mongoose/README.md"
    "D:/Code/modules/juce_mongoose/juce_mongoose.h"
    "../../../JuceLibraryCode/AppConfig.h"
    "../../../JuceLibraryCode/BinaryData.cpp"
    "../../../JuceLibraryCode/BinaryData.h"
    "../../../JuceLibraryCode/include_juce_analytics.cpp"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_cryptography.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_extra.cpp"
    "../../../JuceLibraryCode/include_juce_mongoose.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/Client.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/index.html" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Models.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Server.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Services/Booking.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Services/Schedule.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Services/Service.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Source/Services/Services.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../Readme.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/analytics/juce_Analytics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/analytics/juce_Analytics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/analytics/juce_ButtonTracker.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/destinations/juce_AnalyticsDestination.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/destinations/juce_ThreadedAnalyticsDestination.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/juce_analytics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_analytics/juce_analytics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_StdFunctionCompat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_ClangBugWorkaround.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_osx_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_BlowFish.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_Primes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_Primes.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/encryption/juce_RSAKey.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_MD5.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_MD5.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_SHA256.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_SHA256.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/hashing/juce_Whirlpool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_cryptography/juce_cryptography.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GridUnitTests.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Clipboard.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_linux_X11_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_CPlusPlusCodeTokeniserFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_LuaCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/code_editor/juce_XMLCodeTokeniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/documents/juce_FileBasedDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_ActiveXControlComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_AndroidViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_NSViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_ScopedDPIAwarenessDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_UIViewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/embedding/juce_XEmbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AnimatedAppComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_AppleRemote.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_BubbleMessageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_ColourSelector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_KeyMappingEditorComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_LiveConstantEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PreferencesPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_PushNotifications.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_RecentlyOpenedFilesList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_SystemTrayIconComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/misc/juce_WebBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_android_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_android_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_AndroidViewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_ios_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_ios_UIViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_X11_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_X11_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_linux_XEmbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_AppleRemote.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_CarbonViewWrapperComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_NSViewComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_PushNotifications.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_mac_WebBrowserComponent.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_ActiveXComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_SystemTrayIcon.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/native/juce_win32_WebBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/JUCE/modules/juce_gui_extra/juce_gui_extra.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/include_juce_mongoose.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/JuceLibraryCode/ReadMe.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/Source/Main.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/demo/Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Controller.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Controller.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonController.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonController.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonResponse.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_JsonResponse.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Mutex.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Mutex.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Request.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Request.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_RequestHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Response.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Response.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Server.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Server.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Session.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Session.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Sessions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Sessions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_StreamResponse.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_StreamResponse.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_UploadFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_UploadFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Utils.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_Utils.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebController.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebController.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSocket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSocket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSockets.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/cpp_wrapper/mongoose_WebSockets.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/mongoose_api.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/mongoose/mongoose_api.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/juce_mongoose.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/README.md" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("D:/Code/modules/juce_mongoose/juce_mongoose.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/AppConfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/BinaryData.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
)
