<?hh // strict
/**
 * Copyright (c) 2014, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the "hack" directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 *
 */

abstract class A {
  public int $x;

  public function __construct() {
    $this->x = 5;
  }

  public function make_my_day(): bool {
    return ($this->x === 0);
  }

}

class B extends A {

  public function __construct() {
    if (true) {
      parent::__construct();
    }
    else {
      $this->init();
    }
  }

  private function init(): void {
    if (false) {
      parent::__construct();
    } else {
      parent::__construct();
    }
  }
}
