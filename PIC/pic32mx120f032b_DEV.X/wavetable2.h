/* ************************************************************************** */
/** Descriptive File Name

  @Company
    Company Name

  @File Name
    filename.h

  @Summary
    Brief description of the file.

  @Description
    Describe the purpose of this file.
 */
/* ************************************************************************** */

#ifndef _WAVETABLE2_H    /* Guard against multiple inclusion */
#define _WAVETABLE2_H

#define POT2	8
#define ENVPOT2	8

static const int8_t wt_attak2[] = {
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2,
    -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
    -3, -3, -3, -3, -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -2, -2,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2,
    -3, -3, -3, -3, -3, -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4,
    -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -3, -3,
    -3, -3, -3, -3, -2, -2, -2, -2, -2, -2, -1, -1, -1, -1, -1, -1,
    0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
    1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0,
    0, 0, -1, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -3, -3,
    -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3, -3,
    -3, -3, -3, -2, -2, -2, -2, -2, -1, -1, -1, -1, 0, 0, 0, 0,
    1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5,
    5, 5, 5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 5,
    5, 5, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 2, 2, 2,
    1, 1, 1, 0, 0, 0, -1, -1, -1, -2, -2, -2, -2, -3, -3, -3,
    -3, -3, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4, -4,
    -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -2, -1, -1, -1, 0, 0,
    0, 0, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3,
    3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 0,
    0, -1, -1, -2, -2, -3, -3, -4, -5, -5, -6, -7, -7, -8, -9, -9,
    -10, -11, -11, -12, -13, -13, -14, -14, -15, -16, -16, -17, -17, -18, -18, -18,
    -19, -19, -19, -19, -20, -20, -20, -20, -20, -20, -20, -19, -19, -19, -19, -18,
    -18, -17, -17, -16, -16, -15, -14, -14, -13, -12, -11, -10, -9, -8, -7, -6,
    -5, -4, -3, -2, -1, 0, 1, 2, 3, 5, 6, 7, 8, 9, 10, 11,
    12, 13, 14, 15, 16, 16, 17, 18, 19, 19, 20, 21, 21, 22, 22, 23,
    23, 23, 23, 24, 24, 24, 24, 24, 24, 24, 24, 24, 24, 23, 23, 23,
    22, 22, 22, 21, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 15, 15,
    14, 14, 13, 13, 12, 12, 11, 11, 10, 10, 9, 9, 9, 8, 8, 8,
    7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7,
    8, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 12, 12, 12, 13, 13,
    14, 14, 15, 15, 15, 16, 16, 17, 17, 17, 18, 18, 18, 19, 19, 19,
    19, 20, 20, 20, 20, 20, 20, 20, 21, 21, 21, 21, 21, 21, 21, 21,
    21, 20, 20, 20, 20, 20, 20, 20, 20, 20, 19, 19, 19, 19, 19, 19,
    19, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18, 18,
    18, 19, 19, 19, 19, 19, 19, 20, 20, 20, 20, 21, 21, 21, 22, 22,
    22, 23, 23, 23, 24, 24, 24, 25, 25, 25, 26, 26, 26, 27, 27, 27,
    27, 28, 28, 28, 28, 28, 28, 28, 29, 29, 29, 28, 28, 28, 28, 28,
    28, 28, 27, 27, 27, 26, 26, 25, 25, 24, 24, 23, 23, 22, 21, 21,
    20, 19, 19, 18, 17, 16, 15, 14, 14, 13, 12, 11, 10, 9, 8, 7,
    6, 5, 4, 4, 3, 2, 1, 0, -1, -2, -3, -3, -4, -5, -6, -6,
    -7, -8, -8, -9, -9, -10, -10, -11, -11, -12, -12, -13, -13, -13, -13, -13,
    -14, -14, -14, -14, -14, -14, -14, -14, -14, -13, -13, -13, -13, -12, -12, -12,
    -11, -11, -11, -10, -10, -9, -9, -8, -8, -7, -7, -6, -5, -5, -4, -4,
    -3, -3, -2, -1, -1, 0, 0, 1, 1, 2, 2, 3, 3, 4, 4, 4,
    5, 5, 5, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
    5, 5, 5, 4, 4, 3, 3, 2, 2, 1, 0, -1, -1, -2, -3, -4,
    -5, -6, -7, -8, -9, -10, -12, -13, -14, -15, -17, -18, -19, -21, -22, -23,
    -25, -26, -27, -29, -30, -32, -33, -35, -36, -37, -39, -40, -42, -43, -44, -46,
    -47, -48, -49, -51, -52, -53, -54, -55, -56, -57, -58, -59, -60, -61, -62, -63,
    -63, -64, -65, -66, -66, -67, -67, -68, -68, -69, -69, -69, -70, -70, -70, -70,
    -70, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71, -71,
    -71, -71, -71, -70, -70, -70, -70, -70, -70, -70, -70, -70, -70, -71, -71, -71,
    -71, -71, -71, -71, -71, -72, -72, -72, -72, -73, -73, -73, -74, -74, -74, -75,
    -75, -75, -76, -76, -76, -77, -77, -77, -78, -78, -78, -79, -79, -79, -79, -80,
    -80, -80, -80, -80, -80, -80, -80, -80, -80, -79, -79, -79, -79, -78, -78, -77,
    -77, -76, -75, -74, -74, -73, -72, -71, -70, -69, -67, -66, -65, -63, -62, -61,
    -59, -58, -56, -54, -53, -51, -49, -47, -46, -44, -42, -40, -38, -36, -34, -32,
    -30, -29, -27, -25, -23, -21, -19, -17, -15, -13, -12, -10, -8, -6, -5, -3,
    -1, 0, 2, 3, 5, 6, 8, 9, 10, 11, 13, 14, 15, 16, 17, 18,
    19, 19, 20, 21, 22, 22, 23, 24, 24, 25, 25, 26, 26, 27, 27, 28,
    28, 28, 29, 29, 30, 30, 30, 31, 31, 31, 32, 32, 32, 33, 33, 34,
    34, 35, 35, 36, 36, 37, 37, 38, 38, 39, 40, 40, 41, 42, 42, 43,
    44, 45, 45, 46, 47, 48, 48, 49, 50, 51, 52, 52, 53, 54, 55, 55,
    56, 57, 57, 58, 59, 59, 60, 60, 61, 61, 61, 62, 62, 62, 62, 63,
    63, 63, 62, 62, 62, 62, 62, 61, 61, 60, 60, 59, 59, 58, 57, 57,
    56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 45, 44, 43, 42, 41, 39,
    38, 37, 36, 35, 34, 33, 32, 30, 29, 28, 28, 27, 26, 25, 24, 24,
    23, 23, 22, 22, 21, 21, 21, 21, 21, 21, 21, 21, 21, 22, 22, 22,
    23, 24, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 35, 36, 37, 39,
    40, 42, 43, 45, 46, 48, 50, 51, 53, 54, 56, 58, 59, 61, 62, 64,
    65, 67, 68, 70, 71, 73, 74, 75, 76, 78, 79, 80, 81, 82, 83, 84,
    85, 85, 86, 87, 87, 88, 88, 89, 89, 89, 90, 90, 90, 90, 90, 90,
    90, 90, 90, 90, 90, 90, 90, 89, 89, 89, 88, 88, 88, 87, 87, 86,
    86, 86, 85, 85, 84, 84, 83, 83, 83, 82, 82, 81, 81, 81, 80, 80,
    79, 79, 79, 78, 78, 78, 77, 77, 77, 77, 76, 76, 76, 76, 75, 75,
    75, 75, 74, 74, 74, 74, 73, 73, 73, 73, 72, 72, 72, 71, 71, 71,
    70, 70, 69, 69, 68, 68, 67, 67, 66, 65, 65, 64, 63, 62, 62, 61,
    60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 46, 45, 44,
    43, 41, 40, 39, 38, 36, 35, 34, 32, 31, 30, 28, 27, 26, 24, 23,
    22, 20, 19, 18, 17, 15, 14, 13, 12, 10, 9, 8, 7, 6, 5, 4,
    3, 2, 1, 0, -1, -2, -3, -4, -5, -5, -6, -7, -8, -8, -9, -10,
    -10, -11, -12, -12, -13, -13, -14, -15, -15, -16, -16, -17, -17, -17, -18, -18,
    -19, -19, -19, -20, -20, -21, -21, -21, -22, -22, -22, -23, -23, -23, -24, -24,
    -24, -24, -25, -25, -25, -26, -26, -26, -26, -27, -27, -27, -27, -28, -28, -28,
    -28, -29, -29, -29, -29, -30, -30, -30, -30, -30, -31, -31, -31, -31, -31, -31,
    -32, -32, -32, -32, -32, -32, -33, -33, -33, -33, -33, -33, -33, -33, -34, -34,
    -34, -34, -34, -34, -34, -34, -34, -35, -35, -35, -35, -35, -35, -35, -36, -36,
    -36, -36, -36, -36, -37, -37, -37, -37, -37, -38, -38, -38, -38, -39, -39, -39,
    -39, -40, -40, -40, -41, -41, -41, -42, -42, -43, -43, -44, -44, -45, -45, -46,
    -46, -47, -47, -48, -48, -49, -50, -50, -51, -52, -52, -53, -54, -54, -55, -56,
    -57, -58, -58, -59, -60, -61, -62, -63, -64, -65, -66, -67, -68, -69, -70, -71,
    -72, -73, -74, -76, -77, -78, -79, -80, -82, -83, -84, -85, -86, -88, -89, -90,
    -92, -93, -94, -95, -97, -98, -99, -100, -102, -103, -104, -105, -106, -108, -109, -110,
    -111, -112, -113, -114, -115, -116, -117, -118, -118, -119, -120, -121, -121, -122, -122, -123,
    -123, -124, -124, -124, -124, -125, -125, -125, -125, -124, -124, -124, -124, -123, -123, -122,
    -122, -121, -121, -120, -119, -118, -117, -116, -115, -114, -113, -112, -111, -109, -108, -107,
    -105, -104, -102, -101, -99, -98, -96, -95, -93, -92, -90, -88, -87, -85, -84, -82,
    -80, -79, -77, -76, -74, -73, -71, -70, -68, -67, -65, -64, -63, -62, -60, -59,
    -58, -57, -56, -55, -54, -53, -52, -51, -51, -50, -49, -48, -48, -47, -47, -46,
    -46, -45, -45, -45, -45, -44, -44, -44, -44, -44, -43, -43, -43, -43, -43, -43,
    -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -43, -42,
    -42, -42, -42, -42, -42, -41, -41, -41, -41, -40, -40, -39, -39, -39, -38, -38,
    -37, -37, -36, -36, -35, -35, -34, -34, -33, -32, -32, -31, -31, -30, -29, -29,
    -28, -28, -27, -26, -26, -25, -25, -24, -24, -23, -23, -22, -22, -21, -21, -20,
    -20, -20, -19, -19, -19, -18, -18, -18, -18, -17, -17, -17, -17, -17, -17, -16,
    -16, -16, -16, -16, -16, -16, -16, -15, -15, -15, -15, -15, -14, -14, -14, -14,
    -13, -13, -13, -12, -12, -11, -11, -10, -10, -9, -8, -8, -7, -6, -5, -4,
    -3, -2, -1, 0, 1, 2, 3, 4, 6, 7, 9, 10, 11, 13, 15, 16,
    18, 19, 21, 23, 25, 26, 28, 30, 32, 33, 35, 37, 39, 41, 42, 44,
    46, 48, 50, 51, 53, 55, 56, 58, 60, 61, 63, 64, 66, 67, 68, 70,
    71, 72, 73, 74, 76, 77, 78, 78, 79, 80, 81, 82, 82, 83, 84, 84,
    85, 85, 85, 86, 86, 86, 87, 87, 87, 87, 87, 87, 87, 87, 87, 87,
    87, 87, 87, 87, 87, 87, 87, 87, 86, 86, 86, 86, 86, 86, 86, 86,
    86, 86, 86, 86, 85, 85, 85, 85, 85, 85, 85, 85, 86, 86, 86, 86,
    86, 86, 86, 86, 86, 86, 86, 86, 87, 87, 87, 87, 87, 87, 87, 87,
    87, 87, 87, 87, 87, 87, 87, 87, 87, 87, 86, 86, 86, 86, 86, 85,
    85, 85, 84, 84, 83, 83, 82, 82, 81, 81, 80, 80, 79, 78, 78, 77,
    77, 76, 75, 74, 74, 73, 72, 71, 71, 70, 69, 69, 68, 67, 66, 66,
    65, 64, 64, 63, 63, 62, 61, 61, 60, 60, 60, 59, 59, 58, 58, 58,
    58, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 58, 58, 58,
    59, 59, 59, 60, 60, 61, 61, 62, 62, 63, 63, 64, 64, 65, 66, 66,
    67, 68, 68, 69, 70, 70, 71, 72, 72, 73, 74, 74, 75, 76, 76, 77,
    78, 78, 79, 79, 80, 81, 81, 82, 82, 83, 84, 84, 85, 85, 86, 86,
    86, 87, 87, 88, 88, 89, 89, 89, 90, 90, 90, 91, 91, 91, 91, 92,
    92, 92, 92, 92, 92, 92, 93, 93, 93, 93, 93, 93, 93, 93, 93, 92,
    92, 92, 92, 92, 91, 91, 91, 90, 90, 89, 89, 88, 88, 87, 87, 86,
    85, 84, 84, 83, 82, 81, 80, 79, 78, 76, 75, 74, 73, 71, 70, 68,
    67, 65, 64, 62, 60, 58, 57, 55, 53, 51, 49, 47, 45, 43, 41, 39,
    37, 34, 32, 30, 28, 25, 23, 21, 19, 16, 14, 12, 9, 7, 5, 3,
    0, -2, -4, -6, -8, -11, -13, -15, -17, -19, -21, -23, -25, -27, -29, -30,
    -32, -34, -36, -37, -39, -40, -42, -43, -45, -46, -47, -48, -50, -51, -52, -53,
    -54, -55, -56, -57, -58, -58, -59, -60, -60, -61, -62, -62, -63, -63, -64, -64,
    -64, -65, -65, -66, -66, -66, -66, -67, -67, -67, -67, -67, -68, -68, -68, -68,
    -68, -68, -68, -68, -68, -68, -68, -69, -69, -69, -69, -69, -69, -69, -69, -69,
    -69, -68, -68, -68, -68, -68, -68, -68, -68, -68, -68, -67, -67, -67, -67, -66,
    -66, -66, -66, -65, -65, -64, -64, -64, -63, -63, -62, -62, -61, -61, -60, -59,
    -59, -58, -57, -57, -56, -55, -55, -54, -53, -52, -51, -51, -50, -49, -48, -47,
    -46, -46, -45, -44, -43, -42, -41, -41, -40, -39, -38, -38, -37, -36, -35, -35,
    -34, -33, -33, -32, -32, -31, -31, -30, -30, -30, -29, -29, -29, -29, -28, -28,
    -28, -28, -28, -28, -28, -28, -28, -29, -29, -29, -29, -30, -30, -30, -31, -31,
    -32, -32, -33, -34, -34, -35, -35, -36, -37, -38, -38, -39, -40, -41, -42, -42,
    -43, -44, -45, -46, -47, -48, -49, -49, -50, -51, -52, -53, -54, -55, -56, -57,
    -58, -59, -60, -60, -61, -62, -63, -64, -65, -66, -67, -68, -68, -69, -70, -71,
    -72, -73, -74, -74, -75, -76, -77, -78, -79, -79, -80, -81, -82, -83, -84, -84,
    -85, -86, -87, -88, -88, -89, -90, -91, -92, -92, -93, -94, -95, -95, -96, -97,
    -98, -98, -99, -100, -100, -101, -102, -102, -103, -103, -104, -105, -105, -106, -106, -106,
    -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109,
    -109, -108, -108, -108, -107, -107, -107, -106, -106, -105, -104, -104, -103, -102, -102, -101,
    -100, -99, -98, -97, -96, -95, -94, -93, -92, -91, -90, -89, -88, -87, -85, -84,
    -83, -82, -80, -79, -78, -76, -75, -74, -72, -71, -70, -68, -67, -66, -64, -63,
    -62, -60, -59, -57, -56, -55, -53, -52, -51, -49, -48, -47, -45, -44, -43, -42,
    -40, -39, -38, -36, -35, -34, -33, -31, -30, -29, -28, -27, -25, -24, -23, -22,
    -21, -19, -18, -17, -16, -15, -13, -12, -11, -10, -9, -8, -7, -5, -4, -3,
    -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 12,
    13, 14, 15, 16, 16, 17, 17, 18, 19, 19, 20, 20, 21, 21, 21, 22,
    22, 22, 22, 22, 23, 23, 23, 23, 23, 23, 22, 22, 22, 22, 22, 21,
    21, 21, 20, 20, 19, 19, 18, 18, 17, 17, 16, 15, 15, 14, 13, 13,
    12, 11, 11, 10, 9, 9, 8, 7, 7, 6, 5, 5, 4, 3, 3, 2,
    2, 1, 1, 0, 0, -1, -1, -2, -2, -2, -3, -3, -3, -3, -3, -4,
    -4, -4, -4, -4, -4, -4, -4, -3, -3, -3, -3, -3, -2, -2, -2, -1,
    -1, -1, 0, 0, 1, 1, 1, 2, 2, 3, 3, 4, 4, 5, 6, 6,
    7, 7, 8, 8, 9, 9, 10, 11, 11, 12, 12, 13, 13, 14, 15, 15,
    16, 16, 17, 17, 18, 19, 19, 20, 20, 21, 21, 22, 23, 23, 24, 25,
    25, 26, 27, 27, 28, 29, 29, 30, 31, 32, 33, 33, 34, 35, 36, 37,
    38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 49, 50, 51, 52, 54, 55,
    56, 57, 59, 60, 61, 63, 64, 65, 67, 68, 69, 71, 72, 73, 75, 76,
    77, 79, 80, 81, 83, 84, 85, 86, 87, 89, 90, 91, 92, 93, 94, 95,
    96, 97, 98, 99, 100, 100, 101, 102, 103, 103, 104, 104, 105, 105, 106, 106,
    107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109,
    109, 109, 108, 108, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106,
    105, 105, 105, 105, 104, 104, 104, 103, 103, 103, 102, 102, 102, 102, 101, 101,
    101, 100, 100, 100, 100, 99, 99, 99, 98, 98, 98, 97, 97, 97, 97, 96,
    96, 96, 95, 95, 94, 94, 94, 93, 93, 93, 92, 92, 91, 91, 90, 90,
    89, 89, 88, 88, 87, 87, 86, 85, 85, 84, 84, 83, 82, 82, 81, 81,
    80, 79, 79, 78, 77, 76, 76, 75, 74, 74, 73, 72, 72, 71, 70, 70,
    69, 68, 68, 67, 67, 66, 65, 65, 64, 64, 63, 63, 62, 62, 61, 61,
    60, 60, 59, 59, 58, 58, 58, 57, 57, 57, 56, 56, 56, 55, 55, 55,
    55, 54, 54, 54, 54, 54, 53, 53, 53, 53, 53, 52, 52, 52, 52, 52,
    52, 51, 51, 51, 51, 51, 51, 50, 50, 50, 50, 50, 49, 49, 49, 49,
    48, 48, 48, 48, 47, 47, 47, 47, 46, 46, 46, 45, 45, 45, 44, 44,
    44, 43, 43, 42, 42, 42, 41, 41, 41, 40, 40, 39, 39, 39, 38, 38,
    37, 37, 37, 36, 36, 35, 35, 34, 34, 34, 33, 33, 32, 32, 31, 31,
    30, 30, 29, 29, 28, 28, 27, 27, 26, 26, 25, 25, 24, 23, 23, 22,
    22, 21, 20, 20, 19, 18, 17, 17, 16, 15, 14, 13, 12, 12, 11, 10,
    9, 8, 7, 6, 5, 4, 3, 1, 0, -1, -2, -3, -4, -6, -7, -8,
    -9, -11, -12, -13, -15, -16, -17, -19, -20, -21, -23, -24, -26, -27, -29, -30,
    -31, -33, -34, -36, -37, -38, -40, -41, -43, -44, -45, -47, -48, -50, -51, -52,
    -54, -55, -56, -57, -59, -60, -61, -62, -64, -65, -66, -67, -68, -69, -70, -71,
    -73, -74, -75, -76, -77, -78, -79, -80, -80, -81, -82, -83, -84, -85, -86, -87,
    -87, -88, -89, -90, -91, -91, -92, -93, -93, -94, -95, -96, -96, -97, -98, -98,
    -99, -99, -100, -101, -101, -102, -102, -103, -103, -104, -104, -105, -105, -106, -106, -107,
    -107, -108, -108, -108, -109, -109, -109, -110, -110, -110, -111, -111, -111, -111, -112, -112,
    -112, -112, -112, -112, -112, -112, -113, -113, -113, -113, -113, -113, -113, -113, -113, -112,
    -112, -112, -112, -112, -112, -112, -112, -112, -111, -111, -111, -111, -111, -110, -110, -110,
    -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107,
    -107, -107, -106, -106, -106, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105,
    -105, -105, -105, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -103, -103,
    -103, -103, -103, -103, -103, -102, -102, -102, -102, -101, -101, -101, -101, -100, -100, -100,
    -99, -99, -99, -98, -98, -97, -97, -96, -96, -96, -95, -95, -94, -93, -93, -92,
    -92, -91, -91, -90, -89, -89, -88, -88, -87, -86, -86, -85, -84, -84, -83, -83,
    -82, -81, -81, -80, -80, -79, -78, -78, -77, -77, -76, -76, -75, -75, -74, -74,
    -73, -73, -72, -72, -72, -71, -71, -70, -70, -70, -69, -69, -69, -68, -68, -68,
    -68, -67, -67, -67, -67, -66, -66, -66, -65, -65, -65, -65, -64, -64, -64, -63,
    -63, -63, -62, -62, -62, -61, -61, -60, -60, -59, -59, -59, -58, -57, -57, -56,
    -56, -55, -54, -54, -53, -52, -52, -51, -50, -49, -48, -47, -47, -46, -45, -44,
    -43, -42, -41, -40, -39, -38, -37, -36, -35, -34, -33, -32, -31, -29, -28, -27,
    -26, -25, -24, -23, -22, -21, -20, -19, -18, -17, -15, -14, -13, -12, -11, -10,
    -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, -1, 0, 1, 2, 2, 3,
    4, 5, 5, 6, 7, 7, 8, 9, 9, 10, 11, 11, 12, 13, 13, 14,
    15, 15, 16, 16, 17, 18, 18, 19, 20, 20, 21, 22, 22, 23, 24, 24,
    25, 26, 26, 27, 28, 29, 29, 30, 31, 32, 32, 33, 34, 35, 36, 36,
    37, 38, 39, 40, 41, 41, 42, 43, 44, 45, 46, 46, 47, 48, 49, 50,
    51, 51, 52, 53, 54, 55, 55, 56, 57, 58, 58, 59, 60, 60, 61, 62,
    62, 63, 64, 64, 65, 65, 66, 67, 67, 68, 68, 69, 69, 69, 70, 70,
    71, 71, 72, 72, 72, 73, 73, 73, 74, 74, 74, 75, 75, 75, 76, 76,
    76, 77, 77, 77, 78, 78, 78, 78, 79, 79, 79, 80, 80, 80, 80, 81,
    81, 81, 82, 82, 82, 83, 83, 83, 84, 84, 85, 85, 85, 86, 86, 86,
    87, 87, 88, 88, 88, 89, 89, 90, 90, 91, 91, 91, 92, 92, 93, 93,
    93, 94, 94, 95, 95, 96, 96, 96, 97, 97, 98, 98, 98, 99, 99, 100,
    100, 100, 101, 101, 101, 102, 102, 103, 103, 103, 104, 104, 104, 104, 105, 105,
    105, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109,
    110, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 112, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 112, 113, 113, 113, 113, 113, 113, 112, 112, 112, 112,
    112, 112, 112, 112, 112, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109,
    109, 108, 108, 107, 107, 107, 106, 106, 105, 105, 104, 104, 103, 103, 102, 102,
    101, 101, 100, 99, 99, 98, 98, 97, 96, 96, 95, 95, 94, 93, 93, 92,
    91, 91, 90, 89, 89, 88, 87, 87, 86, 85, 85, 84, 83, 83, 82, 81,
    81, 80, 79, 79, 78, 77, 77, 76, 75, 75, 74, 73, 73, 72, 71, 70,
    70, 69, 68, 68, 67, 66, 65, 65, 64, 63, 62, 62, 61, 60, 59, 58,
    58, 57, 56, 55, 54, 53, 52, 52, 51, 50, 49, 48, 47, 46, 45, 44,
    43, 42, 41, 40, 39, 38, 37, 37, 36, 35, 34, 33, 32, 31, 30, 29,
    28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 17, 16, 15, 14,
    13, 12, 12, 11, 10, 9, 9, 8, 7, 7, 6, 5, 5, 4, 3, 3,
    2, 2, 1, 0, 0, -1, -1, -2, -2, -3, -3, -3, -4, -4, -5, -5,
    -6, -6, -6, -7, -7, -8, -8, -8, -9, -9, -10, -10, -10, -11, -11, -11,
    -12, -12, -13, -13, -14, -14, -14, -15, -15, -16, -16, -17, -17, -18, -18, -19,
    -19, -20, -20, -21, -21, -22, -23, -23, -24, -24, -25, -25, -26, -27, -27, -28,
    -29, -29, -30, -31, -31, -32, -33, -33, -34, -35, -35, -36, -37, -37, -38, -39,
    -40, -40, -41, -42, -42, -43, -44, -44, -45, -46, -46, -47, -48, -49, -49, -50,
    -51, -51, -52, -53, -53, -54, -55, -55, -56, -57, -57, -58, -58, -59, -60, -60,
    -61, -62, -62, -63, -64, -64, -65, -65, -66, -67, -67, -68, -68, -69, -70, -70,
    -71, -71, -72, -73, -73, -74, -74, -75, -75, -76, -77, -77, -78, -78, -79, -79,
    -80, -80, -81, -81, -82, -82, -83, -83, -84, -84, -85, -85, -86, -86, -87, -87,
    -88, -88, -89, -89, -89, -90, -90, -91, -91, -91, -92, -92, -92, -93, -93, -93,
    -94, -94, -94, -95, -95, -95, -96, -96, -96, -96, -97, -97, -97, -97, -98, -98,
    -98, -98, -99, -99, -99, -99, -99, -100, -100, -100, -100, -101, -101, -101, -101, -101,
    -102, -102, -102, -102, -102, -102, -103, -103, -103, -103, -103, -103, -103, -104, -104, -104,
    -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104, -104,
    -104, -104, -104, -104, -104, -104, -103, -103, -103, -103, -103, -102, -102, -102, -102, -101,
    -101, -101, -100, -100, -100, -99, -99, -98, -98, -98, -97, -97, -96, -96, -95, -95,
    -94, -94, -93, -93, -92, -92, -91, -91, -90, -90, -89, -89, -88, -88, -87, -87,
    -86, -86, -85, -85, -84, -84, -83, -83, -82, -82, -81, -81, -81, -80, -80, -80,
    -79, -79, -79, -78, -78, -78, -77, -77, -77, -77, -76, -76, -76, -76, -76, -75,
    -75, -75, -75, -75, -75, -75, -74, -74, -74, -74, -74, -74, -74, -74, -73, -73,
    -73, -73, -73, -73, -73, -73, -72, -72, -72, -72, -72, -72, -71, -71, -71, -71,
    -71, -70, -70, -70, -70, -69, -69, -69, -68, -68, -68, -67, -67, -67, -66, -66,
    -65, -65, -65, -64, -64, -63, -63, -62, -62, -61, -61, -60, -60, -59, -59, -58,
    -58, -57, -57, -56, -55, -55, -54, -54, -53, -53, -52, -51, -51, -50, -50, -49,
    -48, -48, -47, -47, -46, -45, -45, -44, -43, -43, -42, -41, -41, -40, -39, -39,
    -38, -37, -37, -36, -35, -34, -34, -33, -32, -31, -31, -30, -29, -28, -27, -26,
    -25, -25, -24, -23, -22, -21, -20, -19, -18, -17, -16, -15, -14, -13, -12, -10,
    -9, -8, -7, -6, -5, -4, -2, -1, 0, 1, 2, 3, 5, 6, 7, 8,
    10, 11, 12, 13, 15, 16, 17, 18, 19, 21, 22, 23, 24, 25, 27, 28,
    29, 30, 31, 32, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45,
    46, 47, 48, 49, 49, 50, 51, 52, 53, 54, 54, 55, 56, 57, 57, 58,
    59, 60, 60, 61, 62, 62, 63, 64, 64, 65, 66, 66, 67, 68, 68, 69,
    69, 70, 71, 71, 72, 72, 73, 74, 74, 75, 75, 76, 77, 77, 78, 78,
    79, 79, 80, 80, 81, 82, 82, 83, 83, 84, 84, 85, 85, 86, 86, 87,
    87, 88, 88, 89, 89, 90, 90, 90, 91, 91, 92, 92, 92, 93, 93, 93,
    94, 94, 94, 95, 95, 95, 95, 96, 96, 96, 96, 96, 97, 97, 97, 97,
    97, 97, 97, 97, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98,
    98, 98, 98, 99, 99, 99, 99, 99, 99, 99, 99, 99, 99, 100, 100, 100,
    100, 100, 100, 101, 101, 101, 101, 102, 102, 102, 102, 103, 103, 103, 104, 104,
    104, 105, 105, 105, 106, 106, 107, 107, 107, 108, 108, 109, 109, 109, 110, 110,
    110, 111, 111, 112, 112, 112, 113, 113, 113, 114, 114, 114, 114, 115, 115, 115,
    115, 115, 115, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 116, 115,
    115, 115, 115, 115, 114, 114, 114, 113, 113, 113, 112, 112, 112, 111, 111, 110,
    110, 109, 109, 108, 108, 107, 107, 106, 106, 105, 105, 104, 103, 103, 102, 102,
    101, 100, 100, 99, 98, 98, 97, 97, 96, 95, 95, 94, 94, 93, 92, 92,
    91, 90, 90, 89, 89, 88, 87, 87, 86, 86, 85, 84, 84, 83, 83, 82,
    81, 81, 80, 79, 79, 78, 77, 77, 76, 75, 75, 74, 73, 73, 72, 71,
    71, 70, 69, 68, 68, 67, 66, 65, 64, 64, 63, 62, 61, 60, 59, 59,
    58, 57, 56, 55, 54, 53, 52, 51, 50, 50, 49, 48, 47, 46, 45, 44,
    43, 42, 41, 40, 39, 38, 37, 36, 35, 35, 34, 33, 32, 31, 30, 29,
    28, 28, 27, 26, 25, 24, 24, 23, 22, 21, 21, 20, 19, 18, 18, 17,
    16, 16, 15, 15, 14, 13, 13, 12, 12, 11, 11, 10, 9, 9, 8, 8,
    7, 7, 7, 6, 6, 5, 5, 4, 4, 3, 3, 2, 2, 1, 1, 0,
    0, -1, -1, -2, -2, -3, -3, -4, -4, -5, -6, -6, -7, -7, -8, -9,
    -9, -10, -11, -11, -12, -13, -13, -14, -15, -16, -17, -17, -18, -19, -20, -21,
    -21, -22, -23, -24, -25, -26, -27, -28, -29, -30, -31, -31, -32, -33, -34, -35,
    -36, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -48, -49, -50, -51,
    -52, -53, -54, -55, -56, -57, -57, -58, -59, -60, -61, -62, -63, -64, -65, -65,
    -66, -67, -68, -69, -70, -71, -71, -72, -73, -74, -75, -75, -76, -77, -78, -78,
    -79, -80, -81, -81, -82, -83, -84, -84, -85, -86, -86, -87, -88, -89, -89, -90,
    -91, -91, -92, -93, -93, -94, -95, -95, -96, -97, -97, -98, -99, -99, -100, -101,
    -101, -102, -102, -103, -104, -104, -105, -105, -106, -107, -107, -108, -108, -109, -109, -110,
    -110, -111, -111, -112, -112, -113, -113, -114, -114, -115, -115, -116, -116, -116, -117, -117,
    -117, -118, -118, -118, -119, -119, -119, -119, -120, -120, -120, -120, -120, -121, -121, -121,
    -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -121, -120,
    -120, -120, -120, -120, -120, -119, -119, -119, -119, -118, -118, -118, -118, -117, -117, -117,
    -116, -116, -116, -115, -115, -115, -114, -114, -114, -113, -113, -113, -112, -112, -111, -111,
    -111, -110, -110, -110, -109, -109, -108, -108, -108, -107, -107, -106, -106, -106, -105, -105,
    -104, -104, -104, -103, -103, -103, -102, -102, -101, -101, -101, -100, -100, -100, -99, -99,
    -98, -98, -98, -97, -97, -96, -96, -96, -95, -95, -94, -94, -94, -93, -93, -92,
    -92, -92, -91, -91, -90, -90, -89, -89, -88, -88, -87, -87, -87, -86, -86, -85,
    -85, -84, -83, -83, -82, -82, -81, -81, -80, -80, -79, -79, -78, -77, -77, -76,
    -76, -75, -74, -74, -73, -73, -72, -71, -71, -70, -70, -69, -68, -68, -67, -66,
    -66, -65, -65, -64, -63, -63, -62, -61, -61, -60, -59, -59, -58, -58, -57, -56,
    -56, -55, -54, -54, -53, -53, -52, -51, -51, -50, -49, -49, -48, -48, -47, -46,
    -46, -45, -44, -44, -43, -43, -42, -41, -41, -40, -39, -39, -38, -37, -37, -36,
    -35, -35, -34, -33, -32, -32, -31, -30, -29, -29, -28, -27, -26, -26, -25, -24,
    -23, -22, -21, -21, -20, -19, -18, -17, -16, -15, -15, -14, -13, -12, -11, -10,
    -9, -8, -7, -6, -5, -4, -3, -2, -2, -1, 0, 1, 2, 3, 4, 5,
    6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 16, 17, 18, 19, 20,
    21, 22, 23, 24, 24, 25, 26, 27, 28, 29, 29, 30, 31, 32, 33, 34,
    34, 35, 36, 37, 37, 38, 39, 40, 40, 41, 42, 43, 43, 44, 45, 45,
    46, 47, 48, 48, 49, 50, 50, 51, 52, 53, 53, 54, 55, 55, 56, 57,
    58, 58, 59, 60, 60, 61, 62, 62, 63, 64, 65, 65, 66, 67, 67, 68,
    69, 69, 70, 71, 71, 72, 73, 73, 74, 75, 75, 76, 77, 77, 78, 78,
    79, 80, 80, 81, 81, 82, 82, 83, 83, 84, 85, 85, 86, 86, 86, 87,
    87, 88, 88, 89, 89, 90, 90, 90, 91, 91, 91, 92, 92, 93, 93, 93,
    94, 94, 94, 95, 95, 95, 95, 96, 96, 96, 97, 97, 97, 98, 98, 98,
    98, 99, 99, 99, 100, 100, 100, 101, 101, 101, 102, 102, 102, 103, 103, 103,
    104, 104, 105, 105, 105, 106, 106, 107, 107, 108, 108, 108, 109, 109, 110, 110,
    111, 111, 112, 112, 113, 113, 114, 114, 114, 115, 115, 116, 116, 117, 117, 118,
    118, 119, 119, 119, 120, 120, 121, 121, 121, 122, 122, 122, 123, 123, 123, 124,
    124, 124, 124, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126,
    126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 126, 125, 125, 125,
    125, 125, 124, 124, 124, 124, 124, 123, 123, 123, 123, 122, 122, 122, 121, 121,
    121, 121, 120, 120, 120, 119, 119, 119, 118, 118, 118, 117, 117, 117, 116, 116,
    115, 115, 115, 114, 114, 114, 113, 113, 112, 112, 112, 111, 111, 110, 110, 109,
    109, 108, 108, 107, 107, 106, 106, 105, 105, 104, 104, 103, 102, 102, 101, 101,
    100, 99, 99, 98, 97, 97, 96, 95, 94, 94, 93, 92, 91, 90, 89, 89,
    88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73,
    72, 71, 70, 69, 68, 66, 65, 64, 63, 62, 61, 60, 58, 57, 56, 55,
    54, 53, 51, 50, 49, 48, 47, 46, 44, 43, 42, 41, 40, 38, 37, 36,
    35, 34, 33, 32, 30, 29, 28, 27, 26, 25, 23, 22, 21, 20, 19, 18,
    17, 16, 15, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 2, 1, 0,
    -1, -2, -3, -4, -5, -6, -7, -8, -9, -10, -11, -12, -13, -14, -15, -17,
    -18, -19, -20, -21, -22, -23, -24, -25, -26, -27, -28, -29, -30, -31, -32, -33,
    -34, -35, -36, -37, -38, -39, -40, -41, -42, -43, -44, -45, -46, -47, -47, -48,
    -49, -50, -51, -52, -53, -54, -55, -56, -57, -58, -59, -59, -60, -61, -62, -63,
    -64, -65, -65, -66, -67, -68, -69, -70, -70, -71, -72, -73, -74, -74, -75, -76,
    -77, -78, -78, -79, -80, -81, -82, -82, -83, -84, -85, -85, -86, -87, -87, -88,
    -89, -90, -90, -91, -92, -92, -93, -94, -95, -95, -96, -97, -97, -98, -99, -99,
    -100, -101, -101, -102, -102, -103, -104, -104, -105, -106, -106, -107, -107, -108, -108, -109,
    -110, -110, -111, -111, -112, -112, -113, -113, -114, -114, -115, -115, -116, -116, -116, -117,
    -117, -118, -118, -119, -119, -119, -120, -120, -120, -121, -121, -121, -122, -122, -122, -123,
    -123, -123, -123, -124, -124, -124, -124, -124, -125, -125, -125, -125, -125, -126, -126, -126,
    -126, -126, -126, -126, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127,
    -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127, -127,
    -127, -127, -127, -127, -127, -127, -127, -127, -126, -126, -126, -126, -126, -126, -126, -126,
    -126, -125, -125, -125, -125, -125, -125, -124, -124, -124, -124, -124, -124, -123, -123, -123,
    -123, -122, -122, -122, -122, -122, -121, -121, -121, -120, -120, -120, -120, -119, -119, -119,
    -118, -118, -118, -117, -117, -116, -116, -116, -115, -115, -115, -114, -114, -113, -113, -112,
    -112, -111, -111, -111, -110, -110, -109, -109, -108, -107, -107, -106, -106, -105, -105, -104,
    -104, -103, -102, -102, -101, -100, -100, -99, -99, -98, -97, -97, -96, -95, -94, -94,
    -93, -92, -92, -91, -90, -89, -89, -88, -87, -86, -86, -85, -84, -83, -82, -82,
    -81, -80, -79, -78, -77, -77, -76, -75, -74, -73, -72, -71, -71, -70, -69, -68,
    -67, -66, -65, -64, -64, -63, -62, -61, -60, -59, -58, -57, -56, -56, -55, -54,
    -53, -52, -51, -50, -49, -48, -47, -46, -46, -45, -44, -43, -42, -41, -40, -39,
    -38, -37, -36, -36, -35, -34, -33, -32, -31, -30, -29, -28, -27, -26, -26, -25,
    -24, -23, -22, -21, -20, -19, -18, -17, -16, -16, -15, -14, -13, -12, -11, -10,
    -9, -8, -7, -6, -5, -4, -4, -3, -2, -1,
};
static const int8_t wt_sustain2[] = {// 48.5696123989 Hz fundamental frequency at 39062 Hz [ sample_rate / ( 256 * math.pi ) ]
    -2, -4, -6, -8, -10, -12, -15, -19, -24, -28,
    -32, -35, -38, -42, -46, -50, -53, -56, -58, -61,
    -63, -65, -66, -68, -69, -70, -72, -73, -74, -75,
    -75, -75, -76, -76, -76, -76, -76, -75, -75, -75,
    -74, -73, -72, -71, -71, -70, -69, -67, -66, -64,
    -62, -61, -60, -58, -57, -56, -54, -52, -50, -48,
    -47, -46, -45, -44, -42, -40, -38, -36, -35, -33,
    -31, -29, -27, -26, -24, -23, -21, -20, -19, -18,
    -17, -16, -14, -13, -12, -11, -11, -10, -10, -9,
    -9, -9, -9, -9, -9, -9, -9, -9, -10, -10,
    -12, -14, -16, -17, -19, -20, -21, -23, -26, -28,
    -31, -33, -34, -35, -37, -38, -39, -41, -42, -44,
    -46, -49, -51, -53, -55, -57, -59, -61, -64, -66,
    -67, -69, -71, -72, -73, -74, -75, -76, -76, -77,
    -77, -78, -78, -78, -78, -79, -79, -78, -78, -78,
    -77, -77, -76, -76, -76, -76, -76, -76, -75, -75,
    -75, -75, -75, -75, -75, -74, -74, -74, -74, -74,
    -73, -73, -73, -74, -74, -74, -75, -75, -75, -76,
    -76, -77, -77, -78, -79, -80, -80, -81, -81, -81,
    -82, -82, -82, -82, -82, -82, -82, -82, -82, -82,
    -81, -81, -80, -79, -79, -78, -77, -76, -75, -74,
    -73, -73, -73, -72, -72, -72, -72, -72, -72, -72,
    -72, -72, -73, -73, -74, -74, -74, -75, -75, -75,
    -76, -76, -76, -77, -77, -78, -78, -79, -79, -80,
    -80, -80, -80, -80, -81, -81, -82, -82, -82, -82,
    -82, -82, -82, -82, -82, -82, -82, -81, -81, -81,
    -81, -81, -81, -81, -81, -81, -81, -81, -81, -80,
    -80, -80, -80, -80, -80, -80, -80, -80, -80, -80,
    -80, -80, -80, -81, -81, -81, -81, -81, -81, -81,
    -81, -81, -80, -80, -80, -80, -80, -79, -78, -77,
    -77, -76, -76, -75, -74, -73, -72, -70, -69, -68,
    -67, -66, -65, -64, -63, -62, -60, -59, -58, -56,
    -56, -55, -54, -53, -53, -53, -53, -53, -52, -52,
    -52, -53, -54, -55, -56, -58, -59, -61, -63, -65,
    -66, -68, -69, -70, -72, -73, -74, -75, -76, -77,
    -77, -78, -78, -78, -79, -79, -79, -79, -79, -78,
    -78, -78, -78, -77, -77, -76, -76, -75, -74, -73,
    -72, -70, -69, -67, -65, -63, -61, -59, -57, -54,
    -52, -50, -48, -45, -43, -41, -39, -37, -35, -33,
    -30, -27, -23, -20, -16, -12, -8, -4, 0, 5,
    9, 13, 16, 19, 22, 26, 29, 32, 34, 36,
    37, 38, 40, 41, 42, 42, 43, 44, 44, 45,
    45, 44, 44, 44, 45, 45, 46, 46, 46, 46,
    46, 46, 47, 48, 48, 49, 48, 48, 49, 50,
    51, 52, 53, 54, 55, 57, 58, 59, 60, 61,
    61, 62, 63, 63, 63, 64, 65, 66, 67, 68,
    69, 70, 71, 72, 73, 74, 75, 75, 76, 77,
    78, 79, 79, 80, 80, 81, 82, 82, 82, 83,
    83, 84, 84, 84, 85, 85, 85, 85, 85, 85,
    86, 86, 86, 86, 86, 86, 86, 86, 86, 86,
    86, 86, 86, 85, 85, 85, 85, 85, 85, 85,
    85, 85, 85, 85, 84, 84, 84, 84, 83, 83,
    83, 83, 83, 82, 82, 81, 81, 81, 80, 80,
    80, 79, 79, 78, 78, 78, 77, 76, 76, 75,
    74, 74, 73, 73, 73, 72, 71, 71, 70, 70,
    70, 70, 70, 70, 70, 70, 71, 71, 72, 72,
    73, 73, 74, 76, 77, 78, 78, 79, 80, 80,
    81, 82, 82, 83, 83, 84, 84, 84, 85, 85,
    85, 85, 85, 85, 86, 86, 86, 86, 86, 85,
    85, 85, 85, 85, 85, 84, 84, 84, 83, 82,
    82, 81, 80, 79, 78, 76, 74, 72, 70, 68,
    66, 64, 62, 59, 56, 54, 52, 50, 49, 47,
    45, 44, 42, 41, 41, 40, 40, 39, 38, 38,
    38, 38, 38, 37, 38, 38, 39, 41, 42, 43,
    44, 44, 44, 45, 45, 45, 45, 46, 46, 47,
    48, 49, 49, 50, 51, 52, 53, 54, 55, 55,
    57, 58, 60, 62, 63, 65, 66, 67, 69, 71,
    72, 74, 75, 76, 77, 78, 80, 81, 81, 82,
    82, 83, 83, 84, 84, 84, 84, 84, 84, 84,
    83, 83, 83, 82, 81, 80, 79, 77, 76, 74,
    71, 68, 65, 61, 56, 50, 44, 37, 32, 26,
    22, 17, 12, 6, 1, -4, -9, -13, -17, -20,
    -22, -25, -27, -30, -32, -33, -34, -35, -35, -35,
    -36, -36, -36, -37, -37, -37, -36, -36, -35, -33,
    -32, -30, -28, -24, -21, -18, -15, -12, -10, -8,
    -6, -4, -1, 2, 5, 8, 11, 14, 16, 18,
    20, 23, 25, 27, 29, 30, 32, 33, 35, 36,
    37, 38, 38, 39, 40, 41, 41, 42, 42, 42,
    42, 42, 43, 42, 42, 41, 40, 39, 39, 38,
    36, 34, 31, 27, 24, 21, 19, 16, 13, 9,
    5, 2, 0, -1,
};





static const uint8_t envelope_table2[] = {
0,0,0,0,0,1,4,9,11,20,14,4,9,21,24,28,
29,32,33,36,40,41,36,34,32,32,24,22,36,40,46,48,
22,7,30,37,42,45,31,23,37,46,43,36,15,4,17,39,
45,34,28,8,2,16,24,26,31,33,25,21,7,3,54,84,
118,157,169,170,169,169,176,179,197,223,231,240,243,241,238,237,
218,212,184,168,147,137,123,107,96,86,87,92,94,91,91,96,
98,82,78,78,78,105,113,124,127,127,127,129,130,136,140,125,
116,101,93,104,110,132,144,134,127,115,109,98,86,73,66,77,
83,83,79,70,59,25,7,41,51,75,87,88,88,103,111,123,
128,137,147,155,162,164,129,119,103,98,87,84,80,79,70,66,
64,33,15,9,40,58,69,74,70,63,53,41,37,23,18,16,
15,11,10,12,16,17,19,20,21,21,54,64,71,75,62,43,
28,13,18,22,30,39,42,43,43,28,23,10,7,21,26,31,
34,31,26,24,12,9,6,5,15,18,21,24,22,17,14,12,
13,14,15,15,15,17,17,14,9,8,13,16,19,22,23,19,
18,9,5,2,0,0,0,0,0,0,0,0,0,0,0,0,

//0,0,0,0,0,5,9,12,8,5,3,2,6,8,10,11,
//12,12,13,14,15,16,16,17,26,32,36,38,34,31,29,27,
//25,24,23,58,82,108,126,138,146,112,89,74,64,62,60,40,
//27,18,27,33,37,42,45,47,48,48,48,48,62,71,78,58,
//45,47,48,32,21,35,44,32,24,16,11,20,26,24,23,23,
//21,20,19,18,18,46,65,77,86,67,54,46,41,37,30,25,
//22,19,34,43,32,25,17,11,29,40,48,49,50,51,40,32,
//27,24,22,20,19,20,20,21,26,29,26,24,22,21,21,34,
//42,48,47,46,45,58,67,73,78,82,85,57,38,26,31,35,
//37,43,47,50,39,31,26,27,28,28,34,38,30,24,16,10,
//7,6,5,8,9,11,26,36,42,46,48,49,50,36,27,21,
//36,46,53,57,45,37,32,30,29,29,28,28,28,29,29,29,
//19,13,8,5,4,3,2,1,4,6,7,8,8,8,9,9,
//9,9,9,9,6,4,2,1,1,2,3,4,4,4,5,3,
//3,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
//0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,

};

#endif /* _WAVETABLE2_H */

/* *****************************************************************************
 End of File
 */