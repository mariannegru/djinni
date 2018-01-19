// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

package com.dropbox.djinni.test;

import java.util.concurrent.atomic.AtomicBoolean;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

/** Used for C++ multiple inheritance tests */
public abstract class ReturnTwo {
    public abstract byte returnTwo();

    @CheckForNull
    public static native ReturnTwo getInstance();

    private static final class CppProxy extends ReturnTwo
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        // ReturnTwo methods

        @Override
        public byte returnTwo()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_returnTwo(this.nativeRef);
        }
        private native byte native_returnTwo(long _nativeRef);
    }
}
