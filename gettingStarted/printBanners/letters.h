// letters.h: Четан Ананд
// Описание: Эта программа создаёт буквы.

#include <iostream>
#include "buildingBlocks.h"
using namespace std;

void bukvaA () { // буква А
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalParallel();
}

void bukvaBE () { // буква Б
  horizontalLine();
  verticalLeft();
  horizontalLine();
  verticalParallel();
  horizontalLine();
}

void bukvaVE () { // буква В
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalParallel();
  horizontalLine();
}

void bukvaGE () { // буква Г
  horizontalLine();
  verticalLeft();
  verticalLeft();
}

void bukvaDE () { // буква Д
  leftFalling();
  horizontalLine();
  verticalParallelHalf();
}

void bukvaE () { // буквы Е и Ё
  horizontalLine();
  verticalLeft();
  horizontalHalf();
  verticalLeft();
  horizontalLine();
}

void bukvaZHE () { // буква Ж
  invertedCone();
  threeDots();
  cone();
}

void bukvaZE () { // бувка З
  horizontalLine();
  verticalRight();
  horizontalHalfRight();
  verticalRight();
  horizontalLine();
}

void bukvaI () { // буква И
  verticalLeftFalling();
}

void bukvaIKRATKOE () { // буква Й
  horizontalLine();
  cout << endl;
  verticalLeftFalling();
}

void bukvaKA () { // буква К
  leftRising();
  rightFalling();
}

void bukvaEL () { // буква Л
  leftFalling();
}

void bukvaEM () { // буква М
  horizontalLine();
  verticalParallelThree();
  verticalParallelThree();
}

void bukvaEN () { // бувка Н
  verticalParallel();
  horizontalLine();
  verticalParallel();
}

void bukvaO () { // буква О
  horizontalLine();
  verticalParallel();
  verticalParallel();
  horizontalLine();
}

void bukvaPE () { // буква П
  horizontalLine();
  verticalParallel();
  verticalParallel();
}

void bukvaER () { // буква Р
  horizontalLine();
  verticalParallel();
  horizontalLine();
  verticalLeft();
}

void bukvaES() { // буква С
  horizontalLine();
  verticalLeft();
  verticalLeft();
  horizontalLine();
}

void bukvaTE () { // буква Т
  horizontalLine();
  verticalCentre();
  verticalCentre();
}

void bukvaU () { // буква У
  verticalParallel();
  horizontalLine();
  verticalRight();
  horizontalLine();
}

void bukvaEF () { // буква Ф
  verticalCentre();
  horizontalLine();
  verticalParallelThree();
  horizontalLine();
  verticalCentre();
}

void bukvaHA () { // буква Х
  invertedConeWithoutLine();
  coneWithoutLine();
}

void bukvaTSE () { // буква Ц
  verticalParallel();
  verticalParallel();
  horizontalLineLong();
}

void bukvaCHE () { // буква Ч
  verticalParallel();
  horizontalLine();
  verticalRight();
}

void bukvaSHA () { // буква Ш
  verticalParallelThree();
  verticalParallelThree();
  horizontalLine();
}

void bukvaSHCHA () { // буква Щ
  verticalParallelThree();
  verticalParallelThree();
  horizontalLineLong();
}

void bukvaTVYORDIZNAK() { // буква ъ
  horizontalHalf();
  verticalCentre();
  horizontalHalfRight();
  verticalParallelRight();
  horizontalHalfRight();
}

void bukvaERY() { // буква Ы
  verticalParallel();
  horizontalHalf();
  verticalParallelThree();
  horizontalHalf();
}

void bukvaMZ() { // буква Ь
  verticalLeft();
  horizontalLine();
  verticalParallel();
  horizontalLine();
}

void bukvaEE () { // бувка Э
  horizontalLine();
  verticalRight();
  horizontalHalfRight();
  verticalRight();
  horizontalLine();
}

void bukvaIU () { // буква Ю
  horizontalHalfRight();
  verticalParallelThree();
  horizontalLine();
  verticalParallelThree();
  horizontalHalfRight();
}

void bukvaIA() { // буква Я
  horizontalLine();
  verticalParallel();
  horizontalLine();
  leftFalling();
}
