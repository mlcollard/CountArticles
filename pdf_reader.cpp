/*
    pdf_reader.cpp

    Implementation of PDF reader function to process words
    in a PDF file

    NOTE: This is an example of a poor design
*/

#include "pdf_reader.hpp"

// read and process words in a PDF file
void readPDFWords(std::istream& inputSource, int& article_the_count, int& article_a_count, int& article_an_count, int& totalArticles) {

    // processing pdf (large implementation not shown)
    // ...

    // simulate reading words from PDF
    article_the_count = 1;
    article_a_count = 0;
    article_an_count = 0;
    totalArticles = 1;
}
