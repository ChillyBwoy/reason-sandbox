module Styles = {
  open Css;

  let root =
    style([
      backgroundColor(rgb(200, 200, 200)),
      boxSizing(borderBox),
      display(`flex),
      flexDirection(`column),
      minHeight(`vh(100.0)),
      width(pct(100.0)),
    ]);

  let body = style([backgroundColor(rgb(255, 255, 255))]);
};
let component = ReasonReact.statelessComponent("Layout");

let s = ReasonReact.string;

let make = children => {
  ...component,
  render: _self =>
    <div className=Styles.root>
      <Sidebar />
      <div className=Styles.body />
      <h1> {s("Home, sweet home")} </h1>
      <div> ...children </div>
    </div>,
};
