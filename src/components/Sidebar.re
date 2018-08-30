open Themes;

type position =
  | Left
  | Right;

module MakeStyle = (Theme: ThemeType) => {
  open Css;

  let root = (pos: position) =>
    style([
      backgroundColor(Theme.sidebarBgColor),
      height(vh(100.0)),
      position(fixed),
      width(Theme.sidebarWidth),
      zIndex(100),
      switch (pos) {
      | Left => left(px(0))
      | Right => right(px(0))
      },
    ]);

  let content = style([padding(px(20))]);
};

module Styles = MakeStyle(DefaultTheme);

let component = ReasonReact.statelessComponent("Sidebar");

let make = (~position: position=Left, _children) => {
  ...component,
  render: _self =>
    <aside className={Styles.root(position)}>
      <div className=Styles.content> ..._children </div>
    </aside>,
};
