#ifndef COLOR_SELECTION_ALGORITHM_H_INCLUDED
#define COLOR_SELECTION_ALGORITHM_H_INCLUDED

extern const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
extern const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

extern int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

extern int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

#endif
