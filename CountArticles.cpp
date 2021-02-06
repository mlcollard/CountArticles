/*
    CountArticlesPDF.cpp

    Summarize the use of English language articles in a PDF document
*/

#include <iostream>
#include "pdf_reader.hpp"

int main(int argc, char* argv[]) {

    // total article count
    int totalArticles = 0;

    // number of each English language article
    int article_the_count = 0;
    int article_a_count = 0;
    int article_an_count = 0;

    readPDFWords(std::cin, article_the_count, article_a_count, article_an_count, totalArticles);

    // output report on english-language articles
    std::cout << "the" << ": " << article_the_count << '\n';
    std::cout << "an"  << ": " << article_an_count  << '\n';
    std::cout << "a"   << ": " << article_a_count   << '\n';
    std::cout << "Total Articles"   << ": " << totalArticles << '\n';

    return 0;
}
