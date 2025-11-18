// config.c
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "video.h"
#include "assert_with_message.h"

int testMethod(int input1, int input2, int durationMovie, int durationCredit, int fps, char* unit, int output){
    char message[100];
    int result = video(input1, input2, durationMovie, durationCredit, fps, unit);
    sprintf(message, "Inputs (%d, %d). Expected output should be %d. Actuel output = %d", input1, input2, output, result);
    assert_with_message(((result >= output - 1) && (result <= output + 1)), message);
}

int main() {
    testMethod(1024, 1024, 30, 10, 20, "go", 1.953125);24 / 1

    testMethod(2048, 4096, 60, 10, 20, "mo", 24200);
    return 0;
}
