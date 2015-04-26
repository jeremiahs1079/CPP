// JavaScript Document
////////////////////////
//Add Button to Header//
////////////////////////
(function() {
var menu = $('#menu');
if (!menu.length) return;
//Menu Item Support

var libHelp = $('<li/>', {
'class': 'menu-item',
html: '<a class="menu-item-title" href="/">NMSU Resources<span class="menu-item-title-icon"></span></a><div class="menu-item-drop"><table cellspacing="0"><tbody><tr><td class="menu-item-drop-column">'+
'<h2 id="test" >Library</h2><ul class="menu-item-drop-column-list">'+
//List items
'<li><a href="http://nmsu.libguides.com/gettingstarted" target="_blank"><span class="name ellipsis">Getting Started with Research</span></a></li>'+
'<li><a href="http://nmsu.libguides.com/booksandarticles" target="_blank"><span class="name ellipsis">Finding Books & Articles</span></a></li>'+
'<li><a href="http://nmsu.libguides.com/citingyoursources" target="_blank"><span class="name ellipsis">Citing Your Sources</span></a></li>'+
//Ending
'</ul></td></tr></tbody></table></div>'
});

menu.append(libHelp).append(support);
})();