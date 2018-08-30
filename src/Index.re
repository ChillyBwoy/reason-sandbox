module Styles = {
  open Css;

  global("html", [fontFamily("Roboto, HelveticaNeue-Light, sans-serif")]);
  global("body", [margin(zero), fontSize(rem(1.0))]);
};

ReactDOMRe.renderToElementWithId(
  <Layout>
    <Component1 message="Hello!" />
    <Component2 greeting="Hello!" />
  </Layout>,
  "root",
);