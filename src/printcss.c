/* 
** This program and library is free software; you can redistribute it and/or 
** modify it under the terms of the GNU (Library) General Public License 
** as published by the Free Software Foundation; either version 2 
** of the License, or any later version. 
** 
** This program is distributed in the hope that it will be useful, 
** but WITHOUT ANY WARRANTY; without even the implied warranty of 
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
** GNU (Library) General Public License for more details. 
** 
** You should have received a copy of the GNU (Library) General Public License
** along with this program; if not, write to the Free Software 
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA 
*/

/* THIS FILE IS GENERATED BY RUNNING contrib/css_to_c.pl ON A CSS FILE
** DO NOT EDIT THIS FILE BY HAND; RATHER EDIT docs/hypermail.css TO
** REGENERATE IT. IF YO WANT TO CHANGE THE C CODE ITSELF, PLEASE EDIT
** THE css_to_c.pl SCRIPT
*/
			      
#include "hypermail.h"
#include "setup.h"

#include "proto.h"

void print_default_css_file(char *filename)
{
    FILE *fp;
  
    if ((fp = fopen(filename, "w")) == NULL) {
        snprintf(errmsg, sizeof(errmsg), "%s \"%s\".", lang[MSG_COULD_NOT_WRITE], filename);
        progerr(errmsg);
    }

    fprintf(fp, "/*\n");
    fprintf(fp, "** This program and library is free software; you can redistribute it and/or \n");
    fprintf(fp, "** modify it under the terms of the GNU (Library) General Public License \n");
    fprintf(fp, "** as published by the Free Software Foundation; either version 2 \n");
    fprintf(fp, "** of the License, or any later version. \n");
    fprintf(fp, "** \n");
    fprintf(fp, "** This program is distributed in the hope that it will be useful, \n");
    fprintf(fp, "** but WITHOUT ANY WARRANTY; without even the implied warranty of \n");
    fprintf(fp, "** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the \n");
    fprintf(fp, "** GNU (Library) General Public License for more details. \n");
    fprintf(fp, "** \n");
    fprintf(fp, "** You should have received a copy of the GNU (Library) General Public License\n");
    fprintf(fp, "** along with this program; if not, write to the Free Software \n");
    fprintf(fp, "** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA \n");
    fprintf(fp, "**/\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "** Default stylesheet for hypermail archives\n");
    fprintf(fp, "** \n");
    fprintf(fp, "** Last revised: 18/Apr/2023\n");
    fprintf(fp, "**/\n");
    fprintf(fp, "\n");
    fprintf(fp, "html {\n");
    fprintf(fp, "    color: black;\n");
    fprintf(fp, "    background-color: #FFF6E0;\n");
    fprintf(fp, "    /** you may also try #FFFFF6 and #FFEEC2.\n");
    fprintf(fp, "     ** For other color combinations, make sure you choices pass\n");
    fprintf(fp, "     ** the WAI contrast criteria\n");
    fprintf(fp, "     ** by using https://webaim.org/resources/contrastchecker/ */\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "body {\n");
    fprintf(fp, "    margin: 20px;\n");
    fprintf(fp, "    line-height: 1.4;\n");
    fprintf(fp, "    background: transparent;\n");
    fprintf(fp, "    font-family: sans-serif;\n");
    fprintf(fp, "    color: black;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "pre {\n");
    fprintf(fp, "    font-family: monospace;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* for displaying a message's body */\n");
    fprintf(fp, "pre, .body {\n");
    fprintf(fp, "    color: black;\n");
    fprintf(fp, "    background-color: white; \n");
    fprintf(fp, "    padding: 0.5em;\n");
    fprintf(fp, "    white-space: pre-wrap;\n");
    fprintf(fp, "    overflow-wrap: break-word;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* a div.showhtml-body encapsulates\n");
    fprintf(fp, "** the body of a message when using the\n");
    fprintf(fp, "** showhtml option */\n");
    fprintf(fp, "div.showhtml-body {\n");
    fprintf(fp, "    margin-top: 0.5em;\n");
    fprintf(fp, "    padding-top: 0.5em;\n");
    fprintf(fp, "    padding-left: 0.75em;\n");
    fprintf(fp, "    padding-right: 1em;\n");
    fprintf(fp, "    background-color: white;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* in 2.5.0, txt2html() is generating a <br> as the first element; we\n");
    fprintf(fp, "   ignore it until we can fix the code  */\n");
    fprintf(fp, "div.showhtml-body > br:first-child {\n");
    fprintf(fp, "    display: none;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "div.showhtml-body p {\n");
    fprintf(fp, "    padding-top: 0em;\n");
    fprintf(fp, "    padding-bottom: 0em;\n");
    fprintf(fp, "    margin-bottom: 0em;\n");
    fprintf(fp, "    margin-top: 0.75em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* used for signatures when using showhtml */\n");
    fprintf(fp, "div.showhtml-body pre {\n");
    fprintf(fp, "    padding-top: 0.75em;\n");
    fprintf(fp, "    margin-top: 0em;\n");
    fprintf(fp, "    padding-left: 0em;\n");
    fprintf(fp, "    margin-left: 0em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* a div.inline-body encapsulates\n");
    fprintf(fp, "** the body of a message when using the\n");
    fprintf(fp, "** inlinehtml option */\n");
    fprintf(fp, "div.inlinehtml-body {\n");
    fprintf(fp, "    margin-top: 1em;\n");
    fprintf(fp, "    padding: 0.74em;\n");
    fprintf(fp, "    padding-top: 0.2em;\n");
    fprintf(fp, "    color: black;\n");
    fprintf(fp, "    background-color: white;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "div.inlinehtml-body p {\n");
    fprintf(fp, "    padding-top: 0em;\n");
    fprintf(fp, "    padding-bottom: 0em;\n");
    fprintf(fp, "    margin-bottom: 0em;\n");
    fprintf(fp, "    margin-top: 0.75em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* Not too big on the heading - they can be long */\n");
    fprintf(fp, "h1 { font-size: 150%% }\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* use the following rule if you want to add some style to the\n");
    fprintf(fp, "archive's name as displayed in the h1 of each index */\n");
    fprintf(fp, "/* .archive-label  { } */\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* don't print the navbars pointing to the next message and indexes */\n");
    fprintf(fp, "@media print {\n");
    fprintf(fp, " #upper, #navbarfoot, #navbar {\n");
    fprintf(fp, "    display: none;\n");
    fprintf(fp, "  }\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* for displaying the headers */\n");
    fprintf(fp, ".heading {font-weight: bold; }\n");
    fprintf(fp, ".message-id { font-size: 0.9em; }\n");
    fprintf(fp, "span.message-id > span.heading { font-size: revert; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "p.received { margin-bottom: 0; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "table { margin-left: 2em; }\n");
    fprintf(fp, "nav ul {list-style: none; }\n");
    fprintf(fp, "address { font-style: inherit; }\n");
    fprintf(fp, "\n");
    fprintf(fp, ".quotelev1 {color : #990099; }\n");
    fprintf(fp, ".quotelev2 {color : #ff7700; }\n");
    fprintf(fp, ".quotelev3 {color : #007799; }\n");
    fprintf(fp, ".quotelev4 {color : #95c500; }\n");
    fprintf(fp, ".period {font-weight: bold; }\n");
    fprintf(fp, "\n");
    fprintf(fp, ".messages-list, .mail, .summary-year  {\n");
    fprintf(fp, "    border-top:    thin solid black;\n");
    fprintf(fp, "    border-bottom: thin solid black;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".messages-list-author {\n");
    fprintf(fp, "    font-style: italic;\n");
    fprintf(fp, "}\n");
    fprintf(fp, ".messages-list-date {\n");
    fprintf(fp, "    font-style: italic;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".colophon {\n");
    fprintf(fp, "    font-style: italic;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "**  accessible breadcrumbs \n");
    fprintf(fp, "*/\n");
    fprintf(fp, "nav ul {list-style:none; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "nav.breadcrumb ul { padding: 0; }\n");
    fprintf(fp, "nav.breadcrumb ul li { display: inline; }\n");
    fprintf(fp, "nav.breadcrumb ul li+li::before { content: \" > \"; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "**  accessible horizontal menus \n");
    fprintf(fp, "*/\n");
    fprintf(fp, "ul.hmenu_container > li { list-style-type: none; }\n");
    fprintf(fp, "ul.hmenu { font-style: normal; padding: 0; display: inline; }\n");
    fprintf(fp, "ul.hmenu li { display: inline; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "ul.hmenu li {\n");
    fprintf(fp, "    border-right: 1.2px solid black;\n");
    fprintf(fp, "    padding-right: 0.4em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "ul.hmenu li:last-child {\n");
    fprintf(fp, "    border-right: none;\n");
    fprintf(fp, "    padding-right: 0;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "**  replacement for dfn \n");
    fprintf(fp, "*/\n");
    fprintf(fp, ".heading { font-weight: bold; }\n");
    fprintf(fp, "\n");
    fprintf(fp, "h2.heading, h2.theading {\n");
    fprintf(fp, "    font-size: inherit;\n");
    fprintf(fp, "    font-weight: normal;\n");
    fprintf(fp, "    margin-top: 0.2em;\n");
    fprintf(fp, "    margin-bottom: 0;\n");
    fprintf(fp, "    display: list-item;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* \n");
    fprintf(fp, "** rules for the thread view\n");
    fprintf(fp, "*/\n");
    fprintf(fp, "h2.theading:before  {\n");
    fprintf(fp, "    width: 10px;\n");
    fprintf(fp, "    height: 10px;\n");
    fprintf(fp, "    border-radius: 50%%;\n");
    fprintf(fp, "    background: #b83b3b;\n");
    fprintf(fp, "    display: inline-block;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "h2.theading + ul {\n");
    fprintf(fp, "    list-style-type: disc;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "** default settings for narrow screens (smaller headings and padding)\n");
    fprintf(fp, "*/\n");
    fprintf(fp, "body {\n");
    fprintf(fp, "    margin: 1em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "h1 {\n");
    fprintf(fp, "    font-size: 1.5em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "h2 {\n");
    fprintf(fp, "    font-size: 1.25em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "h3 {\n");
    fprintf(fp, "    font-size: 1.125em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".summary-year {\n");
    fprintf(fp, "    padding-top: 1em;\n");
    fprintf(fp, "    padding-bottom: 1em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "main.summary-year th.cell_period + th,\n");
    fprintf(fp, "main.summary-year td.cell_message + td {\n");
    fprintf(fp, "    padding-left: 0.5em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".messages-list {\n");
    fprintf(fp, "    padding-top: 1em;\n");
    fprintf(fp, "    padding-bottom: 1em;\n");
    fprintf(fp, "    margin-left: 1em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".messages-list ul {\n");
    fprintf(fp, "    margin: 0;\n");
    fprintf(fp, "    padding-left: 1em;\n");
    fprintf(fp, "    list-style-type: disc;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* \n");
    fprintf(fp, "** inline attachments\n");
    fprintf(fp, "*/\n");
    fprintf(fp, ".attached-message-notice {\n");
    fprintf(fp, "    font-weight: bold;\n");
    fprintf(fp, "    border-bottom: thin solid black;\n");
    fprintf(fp, "    padding-bottom: 1em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "div.alternative-message-notice {\n");
    fprintf(fp, "    margin-top: 1em;\n");
    fprintf(fp, "    padding: 0.74em;\n");
    fprintf(fp, "    padding-top: 0.2em;\n");
    fprintf(fp, "    color: black;\n");
    fprintf(fp, "    background-color: transparent;\n");
    fprintf(fp, "    border-bottom: thin solid black;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section.message-attachments address {\n");
    fprintf(fp, "    background-color: white;\n");
    fprintf(fp, "    padding-top: 0.75em;\n");
    fprintf(fp, "    padding-left: 0.75em;\n");
    fprintf(fp, "    padding-bottom: 1.25em;;\n");
    fprintf(fp, "    margin-bottom: 0px;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section.message-attachments pre.body {\n");
    fprintf(fp, "    margin-top: 0px;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section.message-attachments div.showhtml-body {\n");
    fprintf(fp, "    margin-top: -0.7em;\n");
    fprintf(fp, "    padding-top: 0em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section.message-attachments div.inlinehtml-body {\n");
    fprintf(fp, "    margin-top: -1.25em;\n");
    fprintf(fp, "    padding-top: 0em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/*\n");
    fprintf(fp, "**  bigger headings and padding on wider screens (desktops, tablets) \n");
    fprintf(fp, "*/\n");
    fprintf(fp, "@media screen and (min-width: 48em) {\n");
    fprintf(fp, "    body {\n");
    fprintf(fp, "	margin: 1em 2.5em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    h1 {\n");
    fprintf(fp, "	font-size: 2em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    h2 {\n");
    fprintf(fp, "	font-size: 1.5em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    h3 {\n");
    fprintf(fp, "	font-size: 1.25em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    ul.hmenu_container {\n");
    fprintf(fp, "	padding-left: 1.5em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    .messages-list {\n");
    fprintf(fp, "	padding-top: 1.5em;\n");
    fprintf(fp, "	padding-bottom: 1.5em;\n");
    fprintf(fp, "	margin-left: 2.5em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "    \n");
    fprintf(fp, "    .messages-list ul {\n");
    fprintf(fp, "	padding-left: 2em;\n");
    fprintf(fp, "    }\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* new sections for WAI.. trim what's not needed */\n");
    fprintf(fp, ".message-forwarded {\n");
    fprintf(fp, "     border-left: 1px inset black;\n");
    fprintf(fp, "     padding-left: 2px;\n");
    fprintf(fp, " }\n");
    fprintf(fp, "\n");
    fprintf(fp, " .message-forwarded * {\n");
    fprintf(fp, "     padding-left: 2px;\n");
    fprintf(fp, " }\n");
    fprintf(fp, "\n");
    fprintf(fp, " .message-forwarded ul li {\n");
    fprintf(fp, "     margin-left: 2em;\n");
    fprintf(fp, " }\n");
    fprintf(fp, "\n");
    fprintf(fp, " .message-body-part h2 {\n");
    fprintf(fp, "     font-size: 1.3em;\n");
    fprintf(fp, " }\n");
    fprintf(fp, "\n");
    fprintf(fp, " ul.headers {\n");
    fprintf(fp, "     list-style: none;\n");
    fprintf(fp, "     padding-left: 0em;\n");
    fprintf(fp, " }\n");
    fprintf(fp, " \n");
    fprintf(fp, "/*\n");
    fprintf(fp, "** accessible links \n");
    fprintf(fp, "*/\n");
    fprintf(fp, "\n");
    fprintf(fp, "/* make links visible thru focus or hover */\n");
    fprintf(fp, "a:link {\n");
    fprintf(fp, "    text-decoration-thickness: 1px;\n");
    fprintf(fp, "    text-underline-offset: 2px;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "a:visited {\n");
    fprintf(fp, "    color: #754675\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "a:focus {\n");
    fprintf(fp, "    outline: 2px solid;\n");
    fprintf(fp, "    outline-offset: 1px;\n");
    fprintf(fp, "    text-decoration: underline;\n");
    fprintf(fp, "    text-decoration-thickness: 1px;\n");
    fprintf(fp, "    outline-color: #005A9C;\n");
    fprintf(fp, "    cursor: pointer;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "a:hover {\n");
    fprintf(fp, "    color: #930;\n");
    fprintf(fp, "    text-decoration: underline;\n");
    fprintf(fp, "    text-decoration-thickness: 2px;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".last-message-date {\n");
    fprintf(fp, "    line-height: 1em;\n");
    fprintf(fp, "    padding-top: 0.25em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, ".archived-on {\n");
    fprintf(fp, "    line-height: 0;\n");
    fprintf(fp, "    margin-bottom: 0.5em;\n");
    fprintf(fp, "    padding-bottom: 0.25em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section section {\n");
    fprintf(fp, "    text-indent: 2em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
    fprintf(fp, "section section section  {\n");
    fprintf(fp, "    text-indent: 4em;\n");
    fprintf(fp, "}\n");
    fprintf(fp, "\n");
     
    fclose(fp);
    
    if (chmod(filename, set_filemode) == -1) {
        snprintf(errmsg, sizeof(errmsg), "%s \"%s\": %o.", lang[MSG_CANNOT_CHMOD], filename, set_filemode);
	progerr(errmsg);
    }
    
} /* end print_default_css_file */

