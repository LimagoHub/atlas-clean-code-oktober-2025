
#pragma once
#include <vector>
#include <thread>
#include <cmath>
#include <memory>
#include "../../AbstractVectorFactory.h"
#include "../../../generator/GeneratorBuilder.h"

namespace atlas::container {

    template<class T>
    class VectorFactoryParallelImpl : public AbstractVectorFactory<T>{
        using MyGeneratorFactory = std::unique_ptr<atlas::generator::GeneratorBuilder<T>>;

        MyGeneratorFactory generatorFactory_;
        size_t thread_count_;

    public:
        VectorFactoryParallelImpl(MyGeneratorFactory  generatorFactory, size_t threadCount) : generatorFactory_(
                std::move(generatorFactory)), thread_count_(threadCount) {}

        ~VectorFactoryParallelImpl()  override = default;

    protected:
        auto fill_array() -> void override {// Integration

        }

    private:

    };

} // collections
