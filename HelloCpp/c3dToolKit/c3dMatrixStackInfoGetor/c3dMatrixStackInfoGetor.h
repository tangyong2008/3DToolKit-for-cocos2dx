//
//  c3dMatrixStackInfoGetor.h
//  HelloCpp
//
//  Created by Yang Chao (wantnon) on 14-1-6.
//
//

#ifndef __HelloCpp__c3dMatrixStackInfoGetor__
#define __HelloCpp__c3dMatrixStackInfoGetor__

#include <iostream>
using namespace std;
#include "cocos2d.h"
using namespace cocos2d;
#include "c3dMatrix.h"
#include "c3dDefine.h"
#include "kazmath/GL/mat4stack.h"
//defined in "matrix.c"
extern km_mat4_stack modelview_matrix_stack;
extern km_mat4_stack projection_matrix_stack;
extern km_mat4_stack texture_matrix_stack;
extern km_mat4_stack* current_stack;

class Cc3dMatStackInfoGetor{
public:
    Cc3dMatStackInfoGetor(){
        
    }
    virtual~Cc3dMatStackInfoGetor(){}
    
    static Cc3dMatStackInfoGetor* sharedMatStackInfoGetor();
    bool init(){return true;}
    Cc3dMatrix4 getTopMat(Ec3dMatStackName eMatStackName);
    Ec3dMatStackName getCurrentStackName();
    
};
#endif /* defined(__HelloCpp__c3dMatrixStackInfoGetor__) */
