// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "grayScaleImage.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, float output){
    char message[100];
    float result = grayScaleImage(input1, input2);
    sprintf(message, "Inputs (%d, %d). Expected output should be %f. Actuel output = %f", input1, input2, output, result);
    assert_with_message((result >= output && result < output+0.1), message);
}

int main() {
    // Test 1
    testMethod(2, 2, 0.003);

    // Test 1
    testMethod(200, 100, 19.5);
    return 0;
}
