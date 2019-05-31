//
// Created by olcay on 2019-05-27.
//

#ifndef DATAGENERATOR_ISAUXILIARYVERBATTRIBUTE_H
#define DATAGENERATOR_ISAUXILIARYVERBATTRIBUTE_H


#include <BinaryAttribute.h>
#include <MorphologicalParse.h>

class IsAuxiliaryVerbAttribute : public BinaryAttribute{
public:
    explicit IsAuxiliaryVerbAttribute(MorphologicalParse parse);
};


#endif //DATAGENERATOR_ISAUXILIARYVERBATTRIBUTE_H
