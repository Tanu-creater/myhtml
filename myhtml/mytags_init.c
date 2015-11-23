//
//  mytags_init.c
//  myhtml
//
//  Created by Alexander Borisov on 28.09.15.
//  Copyright (c) 2015 Alexander Borisov. All rights reserved.
//

#include "mytags.h"

void mytags_init_tags(mytags_t* tags)
{
	mytags_add(tags, "-text", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "!--", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "!doctype", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "a", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "abbr", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "acronym", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "address", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "applet", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "area", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "article", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "aside", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "audio", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "b", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "base", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "basefont", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "bdi", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "bdo", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "bgsound", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "big", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "blink", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "blockquote", 10, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "body", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "br", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "button", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "canvas", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "caption", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "center", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "cite", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "code", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "col", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "colgroup", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "command", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "comment", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "datalist", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dd", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "del", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "details", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dfn", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dialog", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dir", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "div", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dl", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "dt", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "em", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "embed", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "fieldset", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "figcaption", 10, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "figure", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "font", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "footer", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "form", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "frame", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "frameset", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h1", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h2", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h3", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h4", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h5", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "h6", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "head", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "header", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "hgroup", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "hr", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "html", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "i", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "iframe", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "image", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "img", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "input", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "ins", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "isindex", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "kbd", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "keygen", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "label", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "legend", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "li", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "link", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "listing", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "main", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "map", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "mark", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "marquee", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "menu", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "menuitem", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "meta", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "meter", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "math", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "nav", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "nobr", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "noembed", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "noframes", 8, MyHTML_TOKENIZER_STATE_RAWTEXT);
	mytags_add(tags, "noscript", 8, MyHTML_TOKENIZER_STATE_RAWTEXT);
	mytags_add(tags, "object", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "ol", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "optgroup", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "option", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "output", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "p", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "param", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "plaintext", 9, MyHTML_TOKENIZER_STATE_PLAINTEXT);
	mytags_add(tags, "pre", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "progress", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "q", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "rb", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "rp", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "rt", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "rtc", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "ruby", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "s", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "samp", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "script", 6, MyHTML_TOKENIZER_STATE_SCRIPT_DATA);
	mytags_add(tags, "section", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "select", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "small", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "source", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "span", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "strike", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "strong", 6, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "style", 5, MyHTML_TOKENIZER_STATE_RAWTEXT);
	mytags_add(tags, "sub", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "summary", 7, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "sup", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "svg", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "table", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "tbody", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "td", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "template", 8, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "textarea", 8, MyHTML_TOKENIZER_STATE_RCDATA);
	mytags_add(tags, "tfoot", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "th", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "thead", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "time", 4, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "title", 5, MyHTML_TOKENIZER_STATE_RCDATA);
	mytags_add(tags, "tr", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "track", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "tt", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "u", 1, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "ul", 2, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "var", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "video", 5, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "wbr", 3, MyHTML_TOKENIZER_STATE_DATA);
	mytags_add(tags, "xmp", 3, MyHTML_TOKENIZER_STATE_DATA);
}

