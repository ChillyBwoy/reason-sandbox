let s = ReasonReact.string;

let make = _children => {
  ...ReasonReact.statelessComponent("Navigation"),
  render: _self =>
    <nav>
      <ul>
        <li> (s("Home")) </li>
        <li> (s("1")) </li>
        <li> (s("2")) </li>
        <li> (s("3")) </li>
      </ul>
    </nav>,
};
