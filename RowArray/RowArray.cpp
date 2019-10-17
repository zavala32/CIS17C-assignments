/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "RowAray.h"

RowAray::RowAray(unsigned int size){
    this->size = size;
    rowData = new int[size];
}

void rowAray::setData(int pos,int val) {
    rowData[pos] =val;
}
