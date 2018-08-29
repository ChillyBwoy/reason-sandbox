module Styles = {
  open Css;

  let root = style([display(block)]);
};
let component = ReasonReact.statelessComponent("Home");

let s = ReasonReact.string;

let make = children => {
  ...component,
  render: _self =>
    <div className=Styles.root>
      <h1> {s("Home, sweet home")} </h1>
      <div> ...children </div>
    </div>,
};
