LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_STATIC_ANDROID_LIBRARIES := \
    android-support-v4 \
    android-support-v7-appcompat \
    android-support-v7-preference \
    android-support-v7-recyclerview \
    android-support-v13 \
    android-support-v14-preference

LOCAL_STATIC_JAVA_LIBRARIES := \
    org.lineageos.platform.internal

LOCAL_MODULE := org.lineageos.keyhandler
LOCAL_SRC_FILES := $(call all-java-files-under,src)
LOCAL_MODULE_TAGS := optional
LOCAL_DEX_PREOPT := false

include $(BUILD_JAVA_LIBRARY)

