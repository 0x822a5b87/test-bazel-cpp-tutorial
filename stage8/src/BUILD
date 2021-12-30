cc_binary(
    name = "greeter_client",
    srcs = ["greeter_client.cc"],
    copts = [
        "-std=c++11",
    ],
    linkopts = [
        "-lpthread",
        "-ldl",
    ],
    deps = [
        "//protos:helloworld_cc_grpc",
        "@com_github_grpc_grpc//:grpc++",
    ],
)
