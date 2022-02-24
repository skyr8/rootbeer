#include <jni.h>
#include <string>

extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_knownRootAppsPackages
(JNIEnv* env,jobject jobj) {
    //std::string hello = "Hello from C++";
    //return env->NewStringUTF(hello.c_str());

    jobjectArray ret;
    int i;
    const int length = 12;
    char *data[length] = {
            "Leecom.noshufou.android.su",
            "com.noshufou.android.su.elite",
            "eu.chainfire.supersu",
            "com.koushikdutta.superuser",
            "com.thirdparty.superuser",
            "com.yellowes.su",
            "com.topjohnwu.magisk",
            "com.kingroot.kinguser",
            "com.kingo.root",
            "com.smedialink.oneclickroot",
            "com.zhiqupk.root.global",
            "com.alephzain.framaroot"
    };


    ret= (jobjectArray)env->NewObjectArray(length,env->FindClass("java/lang/String"),env->NewStringUTF(""));

    for(i=0;i<length;i++) env->SetObjectArrayElement(ret,i,env->NewStringUTF(data[i]));

    return(ret);
}

extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_knownDangerousAppsPackages
        (JNIEnv *env, jobject jobj) {
//std::string hello = "Hello from C++";
//return env->NewStringUTF(hello.c_str());

    jobjectArray ret;
    int i;
    const int length = 27;

    char *data[length] = {
            "com.koushikdutta.rommanager",
            "com.koushikdutta.rommanager.license",
            "com.dimonvideo.luckypatcher",
            "com.chelpus.lackypatch",
            "com.ramdroid.appquarantine",
            "com.ramdroid.appquarantinepro",
            "com.android.vending.billing.InAppBillingService.COIN",
            "com.android.vending.billing.InAppBillingService.LUCK",
            "com.chelpus.luckypatcher",
            "com.blackmartalpha",
            "org.blackmart.market",
            "com.allinone.free",
            "com.repodroid.app",
            "org.creeplays.hack",
            "com.baseappfull.fwd",
            "com.zmapp",
            "com.dv.marketmod.installer",
            "org.mobilism.android",
            "com.android.wp.net.log",
            "com.android.camera.update",
            "cc.madkite.freedom",
            "com.solohsu.android.edxp.manager",
            "org.meowcat.edxposed.manager",
            "com.xmodgame",
            "com.cih.game_cih",
            "com.charles.lpoqasert",
            "catch_.me_.if_.you_.can_"
    };

    ret = (jobjectArray) env->NewObjectArray(length, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));

    for (i = 0; i < length; i++) env->SetObjectArrayElement(ret, i, env->NewStringUTF(data[i]));

    return (ret);
}

extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_knownRootCloakingPackages
        (JNIEnv *env, jobject jobj) {
//std::string hello = "Hello from C++";
//return env->NewStringUTF(hello.c_str());

    jobjectArray ret;
    int i;
    const int length = 9;

    char *data[length] = {
            "com.devadvance.rootcloak",
            "com.devadvance.rootcloakplus",
            "de.robv.android.xposed.installer",
            "com.saurik.substrate",
            "com.zachspong.temprootremovejb",
            "com.amphoras.hidemyroot",
            "com.amphoras.hidemyrootadfree",
            "com.formyhm.hiderootPremium",
            "com.formyhm.hideroot"
    };

    ret = (jobjectArray) env->NewObjectArray(length, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));

    for (i = 0; i < length; i++) env->SetObjectArrayElement(ret, i, env->NewStringUTF(data[i]));

    return (ret);
}


extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_suPaths
        (JNIEnv *env, jobject jobj) {
//std::string hello = "Hello from C++";
//return env->NewStringUTF(hello.c_str());

    jobjectArray ret;
    int i;
    const int length = 14;

    char *data[length] = {
            "/data/local/",
            "/data/local/bin/",
            "/data/local/xbin/",
            "/sbin/",
            "/su/bin/",
            "/system/bin/",
            "/system/bin/.ext/",
            "/system/bin/failsafe/",
            "/system/sd/xbin/",
            "/system/usr/we-need-root/",
            "/system/xbin/",
            "/cache/",
            "/data/",
            "/dev/"
    };

    ret = (jobjectArray) env->NewObjectArray(length, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));

    for (i = 0; i < length; i++) env->SetObjectArrayElement(ret, i, env->NewStringUTF(data[i]));

    return (ret);
}


extern "C" JNIEXPORT jobjectArray JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_pathsThatShouldNotBeWritable
        (JNIEnv *env, jobject jobj) {
//std::string hello = "Hello from C++";
//return env->NewStringUTF(hello.c_str());

    jobjectArray ret;
    int i;
    const int length = 7;

    char *data[length] = {
            "/system",
            "/system/bin",
            "/system/sbin",
            "/system/xbin",
            "/vendor/bin",
            "/sbin",
            "/etc",
    };

    ret = (jobjectArray) env->NewObjectArray(length, env->FindClass("java/lang/String"),
                                             env->NewStringUTF(""));

    for (i = 0; i < length; i++) env->SetObjectArrayElement(ret, i, env->NewStringUTF(data[i]));

    return (ret);
}

extern "C" {
JNIEXPORT jstring JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_getBinarySu(JNIEnv *env, jclass jclazz) {
    jstring str = env->NewStringUTF("su");
    return str;
}
}


extern "C" {
JNIEXPORT jstring JNICALL
Java_com_scottyab_rootbeer_RootBeerNative_getBinaryBusybox(JNIEnv *env, jclass jclazz) {
    jstring str = env->NewStringUTF("busybox");
    return str;
}
}
