/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
#include <stdio.h>
#include <stdlib.h>
#include <jni.h>
#include "czmq.h"
#include "org_zeromq_czmq_Zosc.h"

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1new (JNIEnv *env, jclass c, jstring address)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    //  Disable CZMQ signal handling; allow Java to deal with it
    zsys_handler_set (NULL);
    jlong new_ = (jlong) (intptr_t) zosc_new (address_);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    return new_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1fromframe (JNIEnv *env, jclass c, jlong frame)
{
    jlong fromframe_ = (jlong) (intptr_t) zosc_fromframe ((zframe_t *) (intptr_t) frame);
    return fromframe_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1frommem (JNIEnv *env, jclass c, jbyteArray data, jlong size)
{
    jbyte *data_ = (byte *) (*env)->GetByteArrayElements (env, data, 0);
    jlong frommem_ = (jlong) (intptr_t) zosc_frommem (data_, (size_t) size);
    (*env)->ReleaseByteArrayElements (env, data, (jbyte *) data_, 0);
    return frommem_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1create (JNIEnv *env, jclass c, jstring address, jstring format)
{
    char *address_ = (char *) (*env)->GetStringUTFChars (env, address, NULL);
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jlong create_ = (jlong) (intptr_t) zosc_create (address_, format_);
    (*env)->ReleaseStringUTFChars (env, address, address_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return create_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zosc__1_1destroy (JNIEnv *env, jclass c, jlong self)
{
    zosc_destroy ((zosc_t **) &self);
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1size (JNIEnv *env, jclass c, jlong self)
{
    jlong size_ = (jlong) zosc_size ((zosc_t *) (intptr_t) self);
    return size_;
}

JNIEXPORT jbyteArray JNICALL
Java_org_zeromq_czmq_Zosc__1_1data (JNIEnv *env, jclass c, jlong self)
{
    jbyte *data_ = (jbyte *) zosc_data ((zosc_t *) (intptr_t) self);
    jint return_size_ = (jint) zosc_size ((zosc_t *) (intptr_t) self);
    jbyteArray return_data_ = (*env)->NewByteArray (env, return_size_);
    (*env)->SetByteArrayRegion (env, return_data_, 0, return_size_, (jbyte *) data_);
    return return_data_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zosc__1_1address (JNIEnv *env, jclass c, jlong self)
{
    char *address_ = (char *) zosc_address ((zosc_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, address_);
    return return_string_;
}

JNIEXPORT jstring JNICALL
Java_org_zeromq_czmq_Zosc__1_1format (JNIEnv *env, jclass c, jlong self)
{
    char *format_ = (char *) zosc_format ((zosc_t *) (intptr_t) self);
    jstring return_string_ = (*env)->NewStringUTF (env, format_);
    return return_string_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1append (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jint append_ = (jint) zosc_append ((zosc_t *) (intptr_t) self, format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return append_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1retr (JNIEnv *env, jclass c, jlong self, jstring format)
{
    char *format_ = (char *) (*env)->GetStringUTFChars (env, format, NULL);
    jint retr_ = (jint) zosc_retr ((zosc_t *) (intptr_t) self, format_);
    (*env)->ReleaseStringUTFChars (env, format, format_);
    return retr_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1dup (JNIEnv *env, jclass c, jlong self)
{
    jlong dup_ = (jlong) (intptr_t) zosc_dup ((zosc_t *) (intptr_t) self);
    return dup_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1pack (JNIEnv *env, jclass c, jlong self)
{
    jlong pack_ = (jlong) (intptr_t) zosc_pack ((zosc_t *) (intptr_t) self);
    return pack_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1packx (JNIEnv *env, jclass c, jlong self)
{
    jlong packx_ = (jlong) (intptr_t) zosc_packx ((zosc_t **) &self);
    return packx_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1unpack (JNIEnv *env, jclass c, jlong frame)
{
    jlong unpack_ = (jlong) (intptr_t) zosc_unpack ((zframe_t *) (intptr_t) frame);
    return unpack_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zosc__1_1print (JNIEnv *env, jclass c, jlong self)
{
    zosc_print ((zosc_t *) (intptr_t) self);
}

JNIEXPORT jboolean JNICALL
Java_org_zeromq_czmq_Zosc__1_1is (JNIEnv *env, jclass c, jlong self)
{
    jboolean is_ = (jboolean) zosc_is ((void *) (intptr_t) self);
    return is_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1first (JNIEnv *env, jclass c, jlong self, jchar type)
{
    jlong first_ = (jlong) (intptr_t) zosc_first ((zosc_t *) (intptr_t) self, (char *) (intptr_t) &type);
    return first_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1next (JNIEnv *env, jclass c, jlong self, jchar type)
{
    jlong next_ = (jlong) (intptr_t) zosc_next ((zosc_t *) (intptr_t) self, (char *) (intptr_t) &type);
    return next_;
}

JNIEXPORT jlong JNICALL
Java_org_zeromq_czmq_Zosc__1_1last (JNIEnv *env, jclass c, jlong self, jchar type)
{
    jlong last_ = (jlong) (intptr_t) zosc_last ((zosc_t *) (intptr_t) self, (char *) (intptr_t) &type);
    return last_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popInt32 (JNIEnv *env, jclass c, jlong self, jint val)
{
    jint pop_int32_ = (jint) zosc_pop_int32 ((zosc_t *) (intptr_t) self, (int *) (intptr_t) &val);
    return pop_int32_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popInt64 (JNIEnv *env, jclass c, jlong self, jlong val)
{
    jint pop_int64_ = (jint) zosc_pop_int64 ((zosc_t *) (intptr_t) self, (int64_t *) (intptr_t) &val);
    return pop_int64_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popFloat (JNIEnv *env, jclass c, jlong self, jfloat val)
{
    jint pop_float_ = (jint) zosc_pop_float ((zosc_t *) (intptr_t) self, (float *) (intptr_t) &val);
    return pop_float_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popDouble (JNIEnv *env, jclass c, jlong self, jdouble val)
{
    jint pop_double_ = (jint) zosc_pop_double ((zosc_t *) (intptr_t) self, (double *) (intptr_t) &val);
    return pop_double_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popChar (JNIEnv *env, jclass c, jlong self, jchar val)
{
    jint pop_char_ = (jint) zosc_pop_char ((zosc_t *) (intptr_t) self, (char *) (intptr_t) &val);
    return pop_char_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popBool (JNIEnv *env, jclass c, jlong self, jboolean val)
{
    jint pop_bool_ = (jint) zosc_pop_bool ((zosc_t *) (intptr_t) self, (bool *) (intptr_t) &val);
    return pop_bool_;
}

JNIEXPORT jint JNICALL
Java_org_zeromq_czmq_Zosc__1_1popMidi (JNIEnv *env, jclass c, jlong self, jint val)
{
    jint pop_midi_ = (jint) zosc_pop_midi ((zosc_t *) (intptr_t) self, (uint32_t *) (intptr_t) &val);
    return pop_midi_;
}

JNIEXPORT void JNICALL
Java_org_zeromq_czmq_Zosc__1_1test (JNIEnv *env, jclass c, jboolean verbose)
{
    zosc_test ((bool) verbose);
}
