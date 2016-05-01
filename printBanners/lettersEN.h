// lettersEN.h: Четан Ананд
// Описание: Эта программа создаёт буквы.

#include <iostream>
#include "buildingBlocks.h"
using namespace std;

void letterA() {
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalParallel();
}

void letterB() {
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalParallel();
  horizontalLine();
}

void letterC() {
  horizontalLine();
  verticalLeft();
  verticalLeft();
  horizontalLine();
}

void letterD () {
  horizontalLine();
  verticalParallel();
  verticalParallel();
  horizontalLine();
}

void letterE() {
  horizontalLine();
  verticalLeft();
  horizontalHalf();
  verticalLeft();
  horizontalLine();
}

void letterF() {
  horizontalLine();
  verticalLeft();
  horizontalHalf();
  verticalLeft();
}

void letterG() {
  horizontalLine();
  verticalLeft();
  horizontalHalfRight();
  verticalParallel();
  horizontalLine();
}

void letterH() {
  verticalParallel();
  horizontalLine();
  verticalParallel();
}

void letterI() {
  horizontalLine();
  verticalCentre();
  verticalCentre();
  horizontalLine();
}

void letterJ() {
  horizontalLine();
  verticalCentre();
  verticalCentre();
  horizontalHalf();
}

void letterK() {
  leftRising();
  rightFalling();
}

void letterL() {
  verticalCentre();
  verticalCentre();
  horizontalLine();
}

void letterM() {
  horizontalLine();
  verticalParallelThree();
  verticalParallelThree();
}

void letterN() {
  horizontalLine();
  verticalParallel();
  verticalParallel();
}

void letterO() {
  horizontalLine();
  verticalParallel();
  verticalParallel();
  horizontalLine();
}

void letterP() {
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalLeft();
}


void letterQ() {
  horizontalLine();
  verticalParallel();
  verticalParallel();
  horizontalLineLong();
}

void letterR() {
  horizontalLine();
  verticalParallel();
  horizontalLine();
  rightFalling();
}

void letterS() {
  horizontalLine();
  verticalLeft();
  horizontalLine();
  verticalRight();
  horizontalLine();
}

void letterT() {
  horizontalLine();
  verticalCentre();
  verticalCentre();
}

void letterU() {
  verticalParallel();
  verticalParallel();
  horizontalLine();
}

void letterV() {
  verticalParallel();
  invertedConeWithoutLine();
}

void letterW() {
  verticalParallelThree();
  invertedCone();
}

void letterX() {
  invertedConeWithoutLine();
  coneWithoutLine();
}

void letterY() {
  verticalParallel();
  horizontalLine();
  verticalRight();
  horizontalLine();
}

void letterZ() {
  horizontalLine();
  leftFallingAlone();
  horizontalLine();
}
