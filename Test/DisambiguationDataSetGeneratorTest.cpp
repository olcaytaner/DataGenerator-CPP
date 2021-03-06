//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include "catch.hpp"
#include "../DataSetGenerator/DisambiguationDataSetGenerator.h"
#include "../InstanceGenerator/FeaturedDisambiguationInstanceGenerator.h"

TEST_CASE("DisambiguationDataSetGeneratorTest-testGenerate") {
    DisambiguationDataSetGenerator disambiguationDataSetGenerator = DisambiguationDataSetGenerator("trees/", "trees.txt", new FeaturedDisambiguationInstanceGenerator(1));
    DataSet dataSet = disambiguationDataSetGenerator.generate();
    REQUIRE(88 == dataSet.sampleSize());
    REQUIRE(41 == dataSet.classCount());
    REQUIRE(4 == dataSet.attributeCount());
}