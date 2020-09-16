#include "Calc.h"
/*
 * Class:     ru_chsergeyg_jni_example_n_Calc
 * Method:    plus
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_ru_chsergeyg_jni_example_n_Calc_plus
  (JNIEnv *, jobject, jint a, jint b) {
  return a + b;
  }

/*
 * Class:     ru_chsergeyg_jni_example_n_Calc
 * Method:    minus
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_ru_chsergeyg_jni_example_n_Calc_minus
  (JNIEnv *, jobject, jint a, jint b) {
  return a - b;
  }

