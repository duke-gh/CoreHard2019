#include "branch.h"
#include <math.h>

double calc(int i) {
  if (__builtin_expect(i>0, 0)) {
    switch (i) {
      case 0:
        i = i + 15;
      case 1:
        i = 2 * i;
      case 2:
        i = i - 4;
    }
    switch (i) {
      case 0:
        i = i + 15;
      case 1:
        i = 2 * i;
      case 2:
        i = i - 4;
    }
    switch (i) {
      case 0:
        i = i + 15;
      case 1:
        i = 2 * i;
      case 2:
        i = i - 4;
    }
    switch (i) {
      case 0:
        i = i + 15;
      case 1:
        i = 2 * i;
      case 2:
        i = i - 4;
    }
    double di = static_cast<double>(i);
    return di*di + di*0.1;
  } else {
    double di = static_cast<double>(i);
    return di*di*di + di*0.3;
  }
}