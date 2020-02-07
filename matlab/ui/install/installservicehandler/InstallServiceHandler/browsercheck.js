//>>built
require({cache:{"dojo/require":function(){define(["./_base/loader"],function(e){return{dynamic:0,normalize:function(d){return d},load:e.require}})},"dojo/selector/lite":function(){define(["../has","../_base/kernel"],function(e,d){var g=document.createElement("div"),b=g.matches||g.webkitMatchesSelector||g.mozMatchesSelector||g.msMatchesSelector||g.oMatchesSelector,k=g.querySelectorAll,f=/([^\s,](?:"(?:\\.|[^"])+"|'(?:\\.|[^'])+'|[^,])*)/g;e.add("dom-matches-selector",!!b);e.add("dom-qsa",!!k);var a=
function(f,n){if(l&&-1<f.indexOf(","))return l(f,n);var b=n?n.ownerDocument||n:d.doc||document,p=(k?/^([\w]*)#([\w\-]+$)|^(\.)([\w\-\*]+$)|^(\w+$)/:/^([\w]*)#([\w\-]+)(?:\s+(.*))?$|(?:^|(>|.+\s+))([\w\-\*]+)(\S*$)/).exec(f);n=n||b;if(p){var r=8===e("ie")&&e("quirks")?n.nodeType===b.nodeType:null!==n.parentNode&&9!==n.nodeType&&n.parentNode===b;if(p[2]&&r){var s=d.byId?d.byId(p[2],b):b.getElementById(p[2]);if(!s||p[1]&&p[1]!=s.tagName.toLowerCase())return[];if(n!=b)for(b=s;b!=n;)if(b=b.parentNode,
!b)return[];return p[3]?a(p[3],s):[s]}if(p[3]&&n.getElementsByClassName)return n.getElementsByClassName(p[4]);if(p[5])if(s=n.getElementsByTagName(p[5]),p[4]||p[6])f=(p[4]||"")+p[6];else return s}if(k)return 1===n.nodeType&&"object"!==n.nodeName.toLowerCase()?q(n,f,n.querySelectorAll):n.querySelectorAll(f);s||(s=n.getElementsByTagName("*"));p=[];b=0;for(r=s.length;b<r;b++){var g=s[b];1==g.nodeType&&c(g,f,n)&&p.push(g)}return p},q=function(a,c,b){var k=a,d=a.getAttribute("id"),e=d||"__dojo__",l=a.parentNode,
g=/^\s*[+~]/.test(c);if(g&&!l)return[];d?e=e.replace(/'/g,"\\$\x26"):a.setAttribute("id",e);g&&l&&(a=a.parentNode);c=c.match(f);for(l=0;l<c.length;l++)c[l]="[id\x3d'"+e+"'] "+c[l];c=c.join(",");try{return b.call(a,c)}finally{d||k.removeAttribute("id")}};if(!e("dom-matches-selector"))var c=function(){function a(c,m,b){var f=m.charAt(0);if('"'==f||"'"==f)m=m.slice(1,-1);m=m.replace(/\\/g,"");var k=e[b||""];return function(a){return(a=a.getAttribute(c))&&k(a,m)}}function c(a){return function(c,b){for(;(c=
c.parentNode)!=b;)if(a(c,b))return!0}}function b(a){return function(c,b){c=c.parentNode;return a?c!=b&&a(c,b):c==b}}function f(a,c){return a?function(b,f){return c(b)&&a(b,f)}:c}var k="div"==g.tagName?"toLowerCase":"toUpperCase",d={"":function(a){a=a[k]();return function(c){return c.tagName==a}},".":function(a){var c=" "+a+" ";return function(b){return-1<b.className.indexOf(a)&&-1<(" "+b.className+" ").indexOf(c)}},"#":function(a){return function(c){return c.id==a}}},e={"^\x3d":function(a,c){return 0==
a.indexOf(c)},"*\x3d":function(a,c){return-1<a.indexOf(c)},"$\x3d":function(a,c){return a.substring(a.length-c.length,a.length)==c},"~\x3d":function(a,c){return-1<(" "+a+" ").indexOf(" "+c+" ")},"|\x3d":function(a,c){return 0==(a+"-").indexOf(c+"-")},"\x3d":function(a,c){return a==c},"":function(a,c){return!0}},l={};return function(k,e,g){var r=l[e];if(!r){if(e.replace(/(?:\s*([> ])\s*)|(#|\.)?((?:\\.|[\w-])+)|\[\s*([\w-]+)\s*(.?=)?\s*("(?:\\.|[^"])+"|'(?:\\.|[^'])+'|(?:\\.|[^\]])*)\s*\]/g,function(k,
e,l,g,m,q,y){g?r=f(r,d[l||""](g.replace(/\\/g,""))):e?r=(" "==e?c:b)(r):m&&(r=f(r,a(m,y,q)));return""}))throw Error("Syntax error in query");if(!r)return!0;l[e]=r}return r(k,g)}}();if(!e("dom-qsa"))var l=function(c,b){for(var k=c.match(f),e=[],d=0;d<k.length;d++){c=new String(k[d].replace(/\s*$/,""));c.indexOf=escape;for(var l=a(c,b),g=0,q=l.length;g<q;g++){var u=l[g];e[u.sourceIndex]=u}}k=[];for(d in e)k.push(e[d]);return k};a.match=b?function(a,c,k){return k&&9!=k.nodeType?q(k,c,function(c){return b.call(a,
c)}):b.call(a,c)}:c;return a})},"xstyle/core/load-css":function(){define([],function(){function e(f){if(b.createStyleSheet){var a=b.createStyleSheet();a.cssText=f;return a.owningElement}a=b.createElement("style");a.setAttribute("type","text/css");a.appendChild(b.createTextNode(f));k.insertBefore(a,k.firstChild);return a}function d(f,a,d){var c=g[f];if(c)return l=e(c),a(l);var l=b.createElement("link");l.type="text/css";l.rel="stylesheet";l.href=f;var t=!d||!1!==d.wait;d=(d=navigator.userAgent.match(/AppleWebKit\/(\d+\.?\d*)/))&&
+d[1];if(null===l.onload&&!(536>d))l.onload=function(){l.onload=null;l.onerror=null;t&&a(l)},l.onerror=function(){console.error("Error loading stylesheet "+f);t&&a(l)};else if(t)var n=setInterval(function(){l.style&&(clearInterval(n),a(l))},15);(k||b.getElementsByTagName("head")[0]).appendChild(l);t||a(l)}var g="undefined"==typeof _css_cache?{}:_css_cache,b=document,k=b.head;d.insertCss=e;return d})},"dijit/main":function(){define(["dojo/_base/kernel"],function(e){return e.dijit})},"dojox/main":function(){define(["dojo/_base/kernel"],
function(e){return e.dojox})},"mw-browser-utils/BrowserCheck":function(){define("dojo/_base/window dojo/window dojo/dom-construct dojo/has dojo/i18n!./l10n/nls/unsupportedErrorPage ./detect/css ./detect/object".split(" "),function(e,d,g,b,k){var f={isBrowserValid:function(){var a=!0;b("quirks")?a=!1:b("css-enabled")?b("css-border-radius")?b("css-text-overflow")?b("object-create")||(a=!1):a=!1:a=!1:a=!1;return a},displayErrorAsOverlay:function(){g.create("div",{style:{position:"absolute",left:"0%",
top:"0%","background-color":"grey","-moz-opacity":"0.7",opacity:".70",filter:"alpha(opacity\x3d70)",width:"100%",height:"100%",zIndex:"90"},id:"fadeDiv"},e.body());g.create("div",{style:{position:"relative",margin:"auto","margin-top":"12.35%",width:"400px",height:"300px",padding:"10px",border:"2px solid black","background-color":"#ffffff","z-index":"100","font-family":"Sans-serif"},id:"unsupportedBrowser","class":"content_module"},e.body()).innerHTML=k.unsupportedError}};return{load:function(a,b,
c){f.isBrowserValid()?c():a?e.global.location=a:f.displayErrorAsOverlay()}}})},"dojo/window":function(){define("./_base/lang ./sniff ./_base/window ./dom ./dom-geometry ./dom-style ./dom-construct".split(" "),function(e,d,g,b,k,f,a){d.add("rtl-adjust-position-for-verticalScrollBar",function(c,b){var d=g.body(b),f=a.create("div",{style:{overflow:"scroll",overflowX:"visible",direction:"rtl",visibility:"hidden",position:"absolute",left:"0",top:"0",width:"64px",height:"64px"}},d,"last"),e=a.create("div",
{style:{overflow:"hidden",direction:"ltr"}},f,"last"),p=0!=k.position(e).x;f.removeChild(e);d.removeChild(f);return p});d.add("position-fixed-support",function(c,b){var d=g.body(b),f=a.create("span",{style:{visibility:"hidden",position:"fixed",left:"1px",top:"1px"}},d,"last"),e=a.create("span",{style:{position:"fixed",left:"0",top:"0"}},f,"last"),p=k.position(e).x!=k.position(f).x;f.removeChild(e);d.removeChild(f);return p});var q={getBox:function(a){a=a||g.doc;var b="BackCompat"==a.compatMode?g.body(a):
a.documentElement,f=k.docScroll(a);if(d("touch")){var e=q.get(a);a=e.innerWidth||b.clientWidth;b=e.innerHeight||b.clientHeight}else a=b.clientWidth,b=b.clientHeight;return{l:f.x,t:f.y,w:a,h:b}},get:function(a){if(d("ie")&&q!==document.parentWindow){a.parentWindow.execScript("document._parentWindow \x3d window;","Javascript");var b=a._parentWindow;a._parentWindow=null;return b}return a.parentWindow||a.defaultView},scrollIntoView:function(a,e){try{a=b.byId(a);var q=a.ownerDocument||g.doc,n=g.body(q),
w=q.documentElement||n.parentNode,p=d("ie")||d("trident"),r=d("webkit");if(!(a==n||a==w))if(!d("mozilla")&&(!p&&!r&&!d("opera")&&!d("trident")&&!d("edge"))&&"scrollIntoView"in a)a.scrollIntoView(!1);else{var s="BackCompat"==q.compatMode,y=Math.min(n.clientWidth||w.clientWidth,w.clientWidth||n.clientWidth),F=Math.min(n.clientHeight||w.clientHeight,w.clientHeight||n.clientHeight),q=r||s?n:w,u=e||k.position(a),m=a.parentNode,r=function(a){return 6>=p||7==p&&s?!1:d("position-fixed-support")&&"fixed"==
f.get(a,"position").toLowerCase()},K=this,H=function(a,b,c){"BODY"==a.tagName||"HTML"==a.tagName?K.get(a.ownerDocument).scrollBy(b,c):(b&&(a.scrollLeft+=b),c&&(a.scrollTop+=c))};if(!r(a))for(;m;){m==n&&(m=q);var h=k.position(m),z=r(m),G="rtl"==f.getComputedStyle(m).direction.toLowerCase();if(m==q){h.w=y;h.h=F;if(q==w&&(p||d("trident"))&&G)h.x+=q.offsetWidth-h.w;h.x=0;h.y=0}else{var A=k.getPadBorderExtents(m);h.w-=A.w;h.h-=A.h;h.x+=A.l;h.y+=A.t;var x=m.clientWidth,B=h.w-x;0<x&&0<B&&(G&&d("rtl-adjust-position-for-verticalScrollBar")&&
(h.x+=B),h.w=x);x=m.clientHeight;B=h.h-x;0<x&&0<B&&(h.h=x)}z&&(0>h.y&&(h.h+=h.y,h.y=0),0>h.x&&(h.w+=h.x,h.x=0),h.y+h.h>F&&(h.h=F-h.y),h.x+h.w>y&&(h.w=y-h.x));var C=u.x-h.x,D=u.y-h.y,I=C+u.w-h.w,J=D+u.h-h.h,v,E;if(0<I*C&&(m.scrollLeft||m==q||m.scrollWidth>m.offsetHeight)){v=Math[0>C?"max":"min"](C,I);if(G&&(8==p&&!s||5<=d("trident")))v=-v;E=m.scrollLeft;H(m,v,0);v=m.scrollLeft-E;u.x-=v}if(0<J*D&&(m.scrollTop||m==q||m.scrollHeight>m.offsetHeight))v=Math.ceil(Math[0>D?"max":"min"](D,J)),E=m.scrollTop,
H(m,0,v),v=m.scrollTop-E,u.y-=v;m=m!=q&&!z&&m.parentNode}}}catch(L){console.error("scrollIntoView: "+L),a.scrollIntoView(!1)}}};e.setObject("dojo.window",q);return q})},"dojo/i18n":function(){define("./_base/kernel require ./has ./_base/array ./_base/config ./_base/lang ./_base/xhr ./json module".split(" "),function(e,d,g,b,k,f,a,q,c){d=e.i18n={};var l=/(^.*(^|\/)nls)(\/|$)([^\/]*)\/?([^\/]*)/,t=function(a,b,c,f){var d=[c+f];b=b.split("-");for(var e="",k=0;k<b.length;k++)if(e+=(e?"-":"")+b[k],!a||
a[e])d.push(c+e+"/"+f),d.specificity=e;return d},n={};g=e.getL10nName=function(a,b,f){var d=c.id+"!";f=f?f.toLowerCase():e.locale;a=a.replace(/\./g,"/");b=b.replace(/\./g,"/");f=/root/i.test(f)?a+"/nls/"+b:a+"/nls/"+f+"/"+b;return d+f};var w=function(a,b,c,d,e,k){a([b],function(g){var l=f.clone(g.root||g.ROOT),h=t(!g._v1x&&g,e,c,d);a(h,function(){for(var a=1;a<h.length;a++)l=f.mixin(f.clone(l),arguments[a]);n[b+"/"+e]=l;l.$locale=h.specificity;k()})})},p=function(a){var b=k.extraLocale||[],b=f.isArray(b)?
b:[b];b.push(a);return b};return f.mixin(d,{dynamic:!0,normalize:function(a,b){return/^\./.test(a)?b(a):a},load:function(a,c,d){a=l.exec(a);var k=a[1]+"/",g=a[5]||a[4],m=k+g,q=(a=a[5]&&a[4])||e.locale||"",t=m+"/"+q;a=a?[q]:p(q);var h=a.length,z=function(){--h||d(f.delegate(n[t]))};b.forEach(a,function(a){n[m+"/"+a]?z():w(c,m,k,g,a,z)})},cache:n,getL10nName:g})})},"mw-browser-utils/l10n/nls/unsupportedErrorPage":function(){define({root:{unsupportedError:"\x3cp\x3eWe're sorry...\x3c/p\x3e\x3cp\x3eThe page you're accessing is not supported on this browser.\x3c/p\x3e\x3cp\x3ePlease change or upgrade to one of the following supported browsers:\x3c/p\x3e\x3cul\x3e\x3cli\x3eOn Windows Vista or Windows 7:\x3cul\x3e\x3cli\x3eChrome 12 and above\x3c/li\x3e\x3cli\x3eFirefox 7 and above\x3c/li\x3e\x3cli\x3eInternet Explorer 9 and above\x3c/li\x3e\x3c/ul\x3e\x3c/li\x3e\x3cli\x3eOn Mac 10.6 or Mac 10.7:\x3cul\x3e\x3cli\x3eSafari 5.0 and above\x3c/li\x3e\x3cli\x3eChrome 12 and above\x3c/li\x3e\x3c/ul\x3e\x3c/li\x3e\x3c/ul\x3e"}})},
"mw-browser-utils/detect/css":function(){define(["dojo/has"],function(e){function d(b,f){var a=!1,d=b.charAt(0).toUpperCase()+b.slice(1),c=g.length,e=f.style;if("string"===typeof e[b])a=!0;else for(;c;)if(c-=1,"string"===typeof e[g[c]+d]){a=!0;break}return a}var g=["Webkit","Moz","O","ms","Khtml"],b=e.add;b("css-enabled",function(b,f,a){var d;b=f.documentElement;var c;if(!(c=f.body))d=!0,c=b.insertBefore(f.createElement("body"),b.firstChild);b=c;c=a.style.display;a.style.display="none";b.insertBefore(a,
b.firstChild);f=0===a.offsetWidth;b.removeChild(a);a.style.display=c;d&&b.parentNode.removeChild(b);return f});b("css-content-box",function(b,f,a){var d,c;b=f.documentElement;var g=null;if(e("css-enabled")){if(!(c=f.body))d=!0,c=b.insertBefore(f.createElement("body"),b.firstChild);a.style.cssText="position: absolute; top: -4000px; width: 40px; height: 40px; border: 1px solid black;";c.insertBefore(a,c.firstChild);g=40===a.clientWidth;c.removeChild(a);a.style.cssText=""}d&&c.parentNode.removeChild(c);
return g});b("css-position-fixed",function(b,d,a){var g,c,l=d.documentElement,t=null;if(e("css-enabled")){b=a.cloneNode(!1);if(!(c=d.body))g=!0,c=l.insertBefore(d.createElement("body"),l.firstChild);d=c.style.cssText;c.style.cssText="padding:0;margin:0";a.style.cssText="position:fixed;top:42px";c.insertBefore(b,c.firstChild);c.insertBefore(a,b);t=a.offsetTop!==b.offsetTop;c.removeChild(a);c.removeChild(b);c.style.cssText=d;a.style.cssText=""}g&&c.parentNode.removeChild(c);return t});b("css-rgba",
function(b,d,a){b=/^rgba/;d=null;if(e("css-enabled"))try{a.style.color="rgba(1,1,1,0.5)",d=b.test(a.style.color),a.style.color=""}catch(g){}return d});b("css-border-radius",function(b,e,a){return d("borderRadius",a)});b("css-box-shadow",function(b,e,a){return d("boxShadow",a)});b("css-box-sizing",function(b,e,a){return d("boxSizing",a)});b("css-opacity",function(b,e,a){return d("opacity",a)});b("css-opacity-filter",function(b,d){return!e("css-opacity")&&"undefined"!==typeof d.documentElement.filters});
b("css-resize",function(b,e,a){return d("resize",a)});b("css-selectable",function(b,e,a){return d("userSelect",a)});b("css-style-float",function(b,e,a){return d("styleFloat",a)});b("css-pointerevents",function(b,e,a){return d("pointerEvents",a)});b("css-text-overflow",function(b,e,a){return d("textOverflow",a)});b("css-text-shadow",function(b,e,a){return d("textShadow",a)});b("css-transform",function(b,e,a){return d("transform",a)});return e})},"mw-browser-utils/detect/object":function(){define(["dojo/has"],
function(e){var d=e.add,g={}.toString,b=Object;d("object-create",function(){return"[object Function]"===g.call(b.create)});d("object-getprototypeof",function(){return"[object Function]"===g.call(b.getPrototypeOf)});d("object-seal",function(){return"[object Function]"===g.call(b.seal)});d("object-freeze",function(){return"[object Function]"===g.call(b.freeze)});d("object-issealed",function(){return"[object Function]"===g.call(b.isSealed)});d("object-isfrozen",function(){return"[object Function]"===
g.call(b.isFrozen)});d("object-keys",function(){return"[object Function]"===g.call(b.keys)});d("object-preventextensions",function(){return"[object Function]"===g.call(b.preventExtensions)});d("object-isextensible",function(){return"[object Function]"===g.call(b.isExtensible)});d("object-defineproperty",function(){return"[object Function]"===g.call(b.defineProperty)});d("object-defineproperties",function(){return"[object Function]"===g.call(b.defineProperties)});d("object-getownpropertydescriptor",
function(){return"[object Function]"===g.call(b.getOwnPropertyDescriptor)});d("object-getownpropertynames",function(){return"[object Function]"===g.call(b.getOwnPropertyNames)});d("object-es5",function(){return e("object-create")&&e("object-defineproperties")&&e("object-defineproperty")&&e("object-freeze")&&e("object-getownpropertydescriptor")&&e("object-getownpropertynames")&&e("object-getprototypeof")&&e("object-isextensible")&&e("object-isfrozen")&&e("object-issealed")&&e("object-keys")&&e("object-preventextensions")&&
e("object-seal")});return e})}}});define("InstallServiceHandler/browsercheck",[],1);