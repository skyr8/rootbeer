package com.scottyab.rootbeer;

import com.scottyab.rootbeer.util.QLog;

import java.lang.reflect.Array;

public class RootBeerNative {

    private static boolean libraryLoaded = false;

    /**
     * Loads the C/C++ libraries statically
     */
    static {
        try {
            System.loadLibrary("toolChecker");
            System.loadLibrary("checkPath");
            libraryLoaded = true;
        } catch (UnsatisfiedLinkError e) {
            QLog.e(e);
        }
    }

    public static boolean wasNativeLibraryLoaded() {
        return libraryLoaded;
    }

    public static native int checkForRoot(Object[] pathArray);

    public static native int setLogDebugMessages(boolean logDebugMessages);

    public static native String[] knownRootAppsPackages();
    public static native String[] knownDangerousAppsPackages();
    public static native String[] knownRootCloakingPackages();
    public static native String[] suPaths();
    public static native String[] pathsThatShouldNotBeWritable();
    public static native String getBinarySu();
    public static native String getBinaryBusybox();
}
