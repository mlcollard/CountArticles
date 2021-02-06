/*
    pdf_reader.hpp

    Declaration of PDF reader function to process words
    in a PDF file

    NOTE: This is an example of a poor design
*/

#ifndef INCLUDED_PDF_READER_HPP
#define INCLUDED_PDF_READER_HPP

#include <istream>

// read and process words in a PDF file
void readPDFWords(std::istream& inputSource, int& article_the_count, int& article_a_count, int& article_an_count, int& totalArticles);

#endif
