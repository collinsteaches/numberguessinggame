    int avg;
    while ((max - min) > range) {
        Y = 0; // event Y is not true.
        N = 0; // event N is not true.
        avg = (max + min) / 2;
        while (!Y && !N) {
            printf("Is your value greater than %d?", avg);
            scanf(" %c", &reply); // note the space before, this tellings scanf
                                  // to ignore the whitespace from the enter
                                  // press
            if (tolower(reply) == 'y') {
                Y = 1;
                N = 0;
                min = avg;
            } else if (tolower(reply) == 'n') {
                N = 1;
                Y = 0;
                max = avg;
            } else {
                printf("Let's try that again.\n");

            }
        }
    }

    i= ((max+min)/2)+1; //applying the ceiling function

    printf("Your number is: %i \n",i);

    return (0);
}
