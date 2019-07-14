# DataGenerator

## Tasks

### Word Sense Disambiguation Task
The task of choosing the correct sense for a word is called word sense disambiguation (WSD). WSD algorithms take an input word *w* in its context with a fixed set of potential word senses S<sub>w</sub> of that input word and produce an output chosen from S<sub>w</sub>. In the isolated WSD task, one usually uses the set of senses from a dictionary or theasurus like WordNet. 

In the literature, there are actually two variants of the generic WSD task. In the lexical sample task, a small selected set of target words is chosen, along with a set of senses for each target word. For each target word *w*, a number of corpus sentences (context sentences) are manually labeled with the correct sense of *w*. In all-words task, systems are given entire sentences and a lexicon with the set of senses for each word in each sentence. Annotators are then asked to disambiguate every word in the text.

In all-words WSD, a classifier is trained to label the words in the text with their set of potential word senses. After giving the sense labels to the words in our training data, the next step is to select a group of features to discriminate different senses for each input word.

### Named Entity Recognition Task
In named entity recognition, one tries to find the strings within a text that correspond to proper names (excluding TIME and MONEY) and classify the type of entity denoted by these strings. The problem is difficult partly due to the ambiguity in sentence segmentation; one needs to extract which words belong to a named entity, and which not. Another difficulty occurs when some word may be used as a name of either a person, an organization or a location. For example, Deniz may be used as the name of a person, or - within a compound - it can refer to a location Marmara Denizi 'Marmara Sea', or an organization Deniz Taşımacılık 'Deniz Transportation'.

The standard approach for NER is a word-by-word classification, where the classifier is trained to label the words in the text with tags that indicate the presence of particular kinds of named entities. After giving the class labels (named entity tags) to our training data, the next step is to select a group of features to discriminate different named entities for each input word.

## Attributes

1. CaseAttribute:  This is a discrete attribute for a given word. If the last inflectional group of the word contains case information, the attribute will have that case value. Otherwise the attribute will have the value null.
2. Is Capital Letter: This a binary valued feature. Its value returns true}if the word starts with a capital letter, and  false otherwise. Words starting with a capital letter are proper nouns unless the word is not the first word in the sentence. Being proper noun is important for meaning because proper nouns do not have specific meanings.
3. LastIGContainsPossessiveAttribute: This is a binary attribute for a given word. If the last inflectional group of the word contains possessive information, the attribute will be true, otherwise it will be false.
4. Main POS: This is a discrete valued feature. The value of the feature consists of the main part-of-speech (POS) tag of the word.
5. NerTag: This is a discrete valued feature, which finds the NER (Named Entity Recognition) tag of the word. This is a strong feature especially for detecting subjects and objects in the sentence. For Instance, if the word has a 'PERSON' NER tag, it is generally the subject or the object of the sentence.
6. Root Form: This is a discrete valued feature and stores the word's root as its value. A root is a word without any affixes. A word takes its meaning mainly from the root. Therefore, this features works well for words having different roots. But when it comes to different surface forms created from the same root, it fails. Both the surface form and the root of a word are directly connected to the sense of the word and these features are crucial for WSD.
7. RootPos Attribute: This attribute is a discrete attribute for a given word. It returns the part of speech of the root word.
8. Surface Form: This is a discrete valued feature and stores the word's itself as its value. It is a strong feature because the meaning of a word's root can be modified through affixation. In a word's surface form, the word is considered as a whole with all the affixes attached, and, when it is used as a feature, it matches with the corresponding meaning. 
9. ShallowTag: This is a discrete valued feature, which finds the Shallow Parse tag of the word.
10. Is Percentage: This is a discrete valued feature. It checks each character in the string. If the character equals to `%', it returns true, otherwise false.
