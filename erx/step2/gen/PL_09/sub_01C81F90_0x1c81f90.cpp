#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01C81F90
// Address: 0x1c81f90 - 0x1c82078
void sub_01C81F90_0x1c81f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81F90_0x1c81f90");
#endif

    switch (ctx->pc) {
        case 0x1c81fc0u: goto label_1c81fc0;
        case 0x1c81ff0u: goto label_1c81ff0;
        case 0x1c82000u: goto label_1c82000;
        case 0x1c82010u: goto label_1c82010;
        default: break;
    }

    ctx->pc = 0x1c81f90u;

    // 0x1c81f90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c81f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c81f94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81f98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c81f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c81f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c81f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c81fa0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c81fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81fa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c81fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c81fa8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c81fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c81fac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c81facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81fb0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c81fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c81fb4: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1c81fb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c81fb8: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81FB8u;
    SET_GPR_U32(ctx, 31, 0x1C81FC0u);
    ctx->pc = 0x1C81FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FB8u;
    // 0x1c81fbc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81FB8u, 0x1C81FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81FC0u;
label_1c81fc0:
    // 0x1c81fc0: 0x24520200  addiu       $s2, $v0, 0x200
    ctx->pc = 0x1c81fc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c81fc4: 0x8e2f0004  lw          $t7, 0x4($s1)
    ctx->pc = 0x1c81fc4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c81fc8: 0x8e4e004c  lw          $t6, 0x4C($s2)
    ctx->pc = 0x1c81fc8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c81fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81fd0: 0xae0f0034  sw          $t7, 0x34($s0)
    ctx->pc = 0x1c81fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 15));
    // 0x1c81fd4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c81fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c81fd8: 0x8e2f0008  lw          $t7, 0x8($s1)
    ctx->pc = 0x1c81fd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1c81fdc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c81fdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c81fe0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c81fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c81fe4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c81fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c81fe8: 0xc7203c6  jal         func_1C80F18
    ctx->pc = 0x1C81FE8u;
    SET_GPR_U32(ctx, 31, 0x1C81FF0u);
    ctx->pc = 0x1C81FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FE8u;
    // 0x1c81fec: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F18u, 0x1C81FE8u, 0x1C81FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81FF0u;
label_1c81ff0:
    // 0x1c81ff0: 0x8e45004c  lw          $a1, 0x4C($s2)
    ctx->pc = 0x1c81ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1c81ff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c81ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ff8: 0xc7203c6  jal         func_1C80F18
    ctx->pc = 0x1C81FF8u;
    SET_GPR_U32(ctx, 31, 0x1C82000u);
    ctx->pc = 0x1C81FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81FF8u;
    // 0x1c81ffc: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F18u, 0x1C81FF8u, 0x1C82000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82000u;
label_1c82000:
    // 0x1c82000: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1c82000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1c82004: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c82004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82008: 0xc7203c8  jal         func_1C80F20
    ctx->pc = 0x1C82008u;
    SET_GPR_U32(ctx, 31, 0x1C82010u);
    ctx->pc = 0x1C8200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82008u;
    // 0x1c8200c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F20u, 0x1C82008u, 0x1C82010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82010u;
label_1c82010:
    // 0x1c82010: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x1c82010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c82014: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c82014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c82018: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1c82018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c8201c: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1c8201cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1c82020: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1c82020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1c82024: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c82024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c82028: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c82028u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c8202c: 0x8e4e00b4  lw          $t6, 0xB4($s2)
    ctx->pc = 0x1c8202cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x1c82030: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1c82030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c82034: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c82034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82038: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1c82038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1c8203c: 0x8e2f001c  lw          $t7, 0x1C($s1)
    ctx->pc = 0x1c8203cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1c82040: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c82040u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c82044: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x1c82044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c82048: 0xae0f0038  sw          $t7, 0x38($s0)
    ctx->pc = 0x1c82048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 15));
    // 0x1c8204c: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x1c8204cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1c82050: 0xae0e0028  sw          $t6, 0x28($s0)
    ctx->pc = 0x1c82050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 14));
    // 0x1c82054: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x1c82054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c82058: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c82058u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c8205c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1c8205cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1c82060: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c82060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82068: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c82068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c8206c: 0x87203c6  j           func_1C80F18
    ctx->pc = 0x1C8206Cu;
    ctx->pc = 0x1C82070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8206Cu;
    // 0x1c82070: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F18u;
    sub_01C80F18_0x1c80f18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C82074u;
    // 0x1c82074: 0x0  nop
    ctx->pc = 0x1c82074u;
    // NOP
    ctx->pc = 0x1c82078u;
}
