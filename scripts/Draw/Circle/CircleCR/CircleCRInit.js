function init(basePath) {
    var action = new RGuiAction(qsTranslate("CircleCR", "Center, &Radius"),
        RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setScriptFile(basePath + "/CircleCR.js");
    action.setIcon(basePath + "/CircleCR.svg");
    action.setStatusTip(qsTranslate("CircleCR", "Draw circle from center and radius"));
    action.setDefaultShortcut(new QKeySequence("c,r"));
    action.setDefaultCommands(["circlecr", "cr"]);
    action.setGroupSortOrder(8100);
    action.setSortOrder(200);
    action.setWidgetNames(["DrawCircleMenu", "CircleToolBar", "CircleToolsPanel"]);
}
