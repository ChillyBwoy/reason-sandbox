let s = ReasonReact.string;

module MakeStyles = (Theme: Themes.ThemeType) => {
  open Css;

  let root =
    style([
      backgroundColor(rgb(255, 255, 255)),
      boxSizing(borderBox),
      display(`flex),
      flexDirection(`column),
      minHeight(`vh(100.0)),
      paddingLeft(px(320)),
      width(pct(100.0)),
    ]);

  let content =
    style([
      backgroundColor(rgb(255, 255, 255)),
      boxSizing(borderBox),
      padding(px(20)),
    ]);

  let sidebar =
    style([
      backgroundColor(rgb(120, 120, 120)),
      height(vh(100.0)),
      position(fixed),
      width(px(320)),
      zIndex(100),
      left(px(0)),
    ]);

  let sidebarContent = style([boxSizing(borderBox), padding(px(20))]);
};

module Styles = MakeStyles(Themes.DefaultTheme);

module Sidebar = {
  let make = _children => {
    ...ReasonReact.statelessComponent("Sidebar"),
    render: _self =>
      <aside className=Styles.sidebar>
        <Navigation />
        <div className=Styles.sidebarContent> ..._children </div>
      </aside>,
  };
};

let make = children => {
  ...ReasonReact.statelessComponent("Layout"),
  render: _self =>
    <div className=Styles.root>
      <Sidebar />
      <div className=Styles.content>
        <h1> (s("Home, sweet home")) </h1>
        <div> ...children </div>
      </div>
    </div>,
};
