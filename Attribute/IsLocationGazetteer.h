//
// Created by Olcay Taner YILDIZ on 2019-05-31.
//

#ifndef DATAGENERATOR_ISLOCATIONGAZETTEER_H
#define DATAGENERATOR_ISLOCATIONGAZETTEER_H


#include <BinaryAttribute.h>
#include <Gazetteer.h>

class IsLocationGazetteer : public BinaryAttribute{
public:
    static Gazetteer gazetteer;
    explicit IsLocationGazetteer(string surfaceForm);
};

Gazetteer IsLocationGazetteer::gazetteer = Gazetteer("LOCATION", "gazetteer-person.txt");

#endif //DATAGENERATOR_ISLOCATIONGAZETTEER_H
