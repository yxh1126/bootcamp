load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

package(
    default_visibility = ["//visibility:public"],
)

cc_library(
    name = "json11",
    srcs = [
        "json11.cc",
    ],
    hdrs = [
        "json11.h",
    ],
)

cc_binary(
    name = "test_run",
    srcs = [
        "test_run.cc",
    ],
    deps = [
        "//json11:json11",
    ],
)
