//
// Created by Olcay Taner YILDIZ on 12.01.2021.
//

#include "catch.hpp"
#include "../CorpusGenerator/TreeDisambiguationCorpusGenerator.h"

TEST_CASE("TreeDisambiguationCorpusGeneratorTest-testGenerate") {
    TreeDisambiguationCorpusGenerator treeDisambiguationCorpusGenerator = TreeDisambiguationCorpusGenerator("trees/", "trees.txt");
    DisambiguationCorpus* disambiguationCorpus = treeDisambiguationCorpusGenerator.generate();
    REQUIRE(10 == disambiguationCorpus->sentenceCount());
    REQUIRE(88 == disambiguationCorpus->numberOfWords());
    REQUIRE(13 == disambiguationCorpus->maxSentenceLength());
}