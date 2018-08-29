const path = require('path');
const OUTPUT_DIR = path.join(__dirname, "build/");

const isProd = process.env.NODE_ENV === 'production';

module.exports = {
  entry: './lib/js/src/Index.bs.js',
  mode: isProd ? 'production' : 'development',
  output: {
    path: OUTPUT_DIR,
    publicPath: OUTPUT_DIR,
    filename: 'Index.js',
  },
};
